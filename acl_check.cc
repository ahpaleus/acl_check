// g++ acl_check.cc -o acl_check.exe -lpsapi

#include <windows.h>
#include <stdio.h>
#include <psapi.h>

#define MAX_NAME 256

int main() {
	DWORD aProcesses[1024], cbNeeded, cProcesses;

	if ( !EnumProcesses( aProcesses, sizeof(aProcesses), &cbNeeded ) )
    {
    	fprintf(stderr, "EnumProcesses failed (%u)\n", GetLastError());
        return 1;
    }

    cProcesses = cbNeeded / sizeof(DWORD);
    fprintf(stdout, "Number of processes: %u\n", cProcesses);

    unsigned int i;

    for ( i = 0; i < cProcesses; i++ ) {
    	if( aProcesses[i] != 0 )
        {
        	HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, FALSE, aProcesses[i]); 
			
			if ( h != NULL ) { 
                HANDLE token_handle;
                if (!OpenProcessToken(h, TOKEN_QUERY, &token_handle)) {
                    fprintf(stderr, "OpenProcessToken failed (%u)\n", GetLastError());
                    CloseHandle(h);
                    return 2;
                }
                
                DWORD dwSize = 0;
                DWORD dwResult = 0;
                PTOKEN_USER pUserInfo;

                if(!GetTokenInformation(token_handle, TokenUser, NULL, dwSize, &dwSize)) {
                    dwResult = GetLastError();
                    if (dwResult != 122) {
                        return 3;
                    }

                } 
                pUserInfo = (PTOKEN_USER)GlobalAlloc(GPTR, dwSize);
                
                if(!GetTokenInformation(token_handle, TokenUser, pUserInfo, dwSize, &dwSize)) { 
                    fprintf(stderr, "GetTokenInformation failed (%u)\n", GetLastError());
                    CloseHandle(h);
                    return 4;
                } 

                char lpName[MAX_NAME];
                char lpDomain[MAX_NAME];
                SID_NAME_USE abc;

                LookupAccountSid(
                    NULL,
                    pUserInfo->User.Sid,
                    lpName,
                    &dwSize,
                    lpDomain,
                    &dwSize,
                    &abc
                );

                GlobalFree(pUserInfo);

				TCHAR szProcessName[MAX_PATH] = TEXT("<unknown>");
				GetModuleFileNameEx(h, 0, szProcessName ,sizeof(szProcessName)/sizeof(TCHAR));
				fprintf(stdout, "%s\\%s\tPROCESS_ALL_ACCESS\tPID: %u\t%s\n", lpDomain, lpName, aProcesses[i], szProcessName);
                CloseHandle(h);
			}
        }
    }

}

