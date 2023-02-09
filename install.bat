@ECHO off
title Installing Rosemary
echo Installing in %cd%/rsmy
setx rsmypath %cd%/rsmy
setx path "%path%;%INPUT%"cd%/rsmy
echo [~---------]
ping -n 2 localhost >nul
cls
echo [~~--------]
ping -n 2 localhost  >nul
cls
echo [~~~-------]
ping -n 2 localhost  >nul
cls
echo [~~~~------]
curl  https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/src/cpp/rsmy.exe -o rsmy.exe
ping -n 2 localhost  >nul
cls
echo [~~~~~-----]
ping -n 2 localhost  >nul
cls
echo [~~~~~~----]
ping -n 2 localhost  >nul
cls
echo [~~~~~~~---]
ping -n 2 localhost  >nul
cls
echo [~~~~~~~~--]
curl  https://raw.githubusercontent.com/TheRosemaryProject/Sprig/main/sprig.exe -o sprig.exe
ping -n 2 localhost  >nul
cls
echo [~~~~~~~~~-]
ping -n 2 localhost >nul
echo "you are fast at reading"
cls
echo [~~~~~~~~~~]
echo Installed!
echo Booting into your first session! :)
rsmy
:error 
echo x=msgbox ("An error occured - better luck next time!" ,0, "title")
ping -n 5 localhost  >nul
exit /b
