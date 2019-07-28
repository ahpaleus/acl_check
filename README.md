# Access Control List check

Small example which shows how to iterate through each process showing the PID, owner (Domain/Name) and location for process-specific access rights (*PROCESS_ALL_ACCESS*).
Helpful while tinkering with Process Injection.

Example of usage:
```
acl_check.exe
Number of processes: 158
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 4448       C:\Windows\System32\sihost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 4544       C:\Windows\System32\svchost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 4596       C:\Windows\System32\svchost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 4732       C:\Windows\System32\taskhostw.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 5104       C:\Windows\explorer.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 5448       C:\Windows\System32\svchost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 5632       C:\Windows\System32\dllhost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 5824       C:\Windows\SystemApps\ShellExperienceHost_cw5n1h2txyewy\ShellExperienceHost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 5964       C:\Windows\SystemApps\Microsoft.Windows.Cortana_cw5n1h2txyewy\SearchUI.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 3928       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 1328       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6240       C:\Windows\System32\ApplicationFrameHost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6248       C:\Windows\SystemApps\Microsoft.MicrosoftEdge_8wekyb3d8bbwe\MicrosoftEdge.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6552       C:\Program Files\WindowsApps\Microsoft.SkypeApp_14.50.38.0_x64__kzf8qxf38zg5c\SkypeBackgroundHost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6636       C:\Program Files\WindowsApps\Microsoft.SkypeApp_14.50.38.0_x64__kzf8qxf38zg5c\SkypeApp.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6648       C:\Windows\System32\browser_broker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6732       C:\Program Files\WindowsApps\Microsoft.YourPhone_1.19062.451.0_x64__8wekyb3d8bbwe\YourPhone.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6956       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 7048       C:\Windows\System32\MicrosoftEdgeSH.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 7064       C:\Windows\System32\MicrosoftEdgeCP.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 744        C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 7512       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 7568       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 7972       C:\Windows\System32\smartscreen.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 8016       C:\Windows\System32\SecurityHealthSystray.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 1108       C:\Program Files\VMware\VMware Tools\vmtoolsd.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 7344       C:\Windows\System32\dllhost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 5860       C:\Users\User\AppData\Local\Microsoft\OneDrive\OneDrive.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 8244       C:\Program Files\WindowsApps\Microsoft.WindowsStore_11905.1001.4.0_x64__8wekyb3d8bbwe\WinStore.App.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 8324       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 2044       C:\Windows\SystemApps\InputApp_cw5n1h2txyewy\WindowsInternal.ComposableShell.Experiences.TextInput.InputApp.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6208       C:\Windows\System32\svchost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 2884       C:\Program Files\WindowsApps\Microsoft.Windows.Photos_2019.19051.16210.0_x64__8wekyb3d8bbwe\Microsoft.Photos.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6000       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 8328       C:\Windows\System32\cmd.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 2808       C:\Windows\System32\conhost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 2708       C:\Windows\System32\cmd.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 1680       C:\Windows\System32\conhost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 7656       C:\Program Files\WindowsApps\microsoft.windowscommunicationsapps_16005.11629.20316.0_x64__8wekyb3d8bbwe\HxAccounts.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 5992       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 304        C:\Program Files\WindowsApps\microsoft.windowscommunicationsapps_16005.11629.20316.0_x64__8wekyb3d8bbwe\HxTsr.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 4700       C:\Windows\ImmersiveControlPanel\SystemSettings.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6976       C:\Windows\System32\cmd.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6780       C:\Windows\System32\conhost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 10584      C:\Windows\System32\backgroundTaskHost.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 1420       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 6184       C:\Windows\System32\RuntimeBroker.exe
WINDEV1905EVAL\User     PROCESS_ALL_ACCESS      PID: 4160       \\vmware-host\Shared Folders\ACL_check\acl_check.exe
```
