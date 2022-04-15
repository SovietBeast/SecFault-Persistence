This time we doing something simillar to the startup folder but in registry
We add to the startup sequence our binary
REG ADD "HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\Run" /V "SecFault" /t REG_SZ /F /D "path to exe"
Reboot and enjoy your shell ;)
This can be checkend for example in Task Manager in Startup tab
To delete registry entry do
REG DELETE "HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\Run"