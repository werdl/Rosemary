@ECHO off
title Installing Rosemary
set /p INPUT= Install Directory: 
IF %INPUT%==null (echo Installing In %cd%) 
IF %INPUT%==null (mkdir rsmy)
IF %INPUT%==null (%INPUT%=%UserProfile%+'rsmy')
setx rsmypath %INPUT%
curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/src/cpp/rsmy.exe > %INPUT%+'/rsmy.exe'
curl https://raw.githubusercontent.com/TheRosemaryProject/Sprig/main/sprig.exe > %INPUT%+'/sprig.exe'
setx path "%path%;%INPUT%"
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
ping -n 2 localhost  >nul
cls
echo [~~~~~~~~~-]
ping -n 2 localhost >nul
cls
echo [~~~~~~~~~~]
echo Installed!
pause
rsmy
