@ECHO off
title Installing Rosemary
set /p INPUT= Install Directory: 
IF %INPUT%=="" (echo Installing In %cd%/rsmy) 
IF %INPUT%=="" (mkdir rsmy)
IF %INPUT%=="" (%INPUT%=%UserProfile%+'/rsmy')
setx rsmypath %INPUT%
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
curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/src/cpp/rsmy.exe > %INPUT%+'/rsmy.exe'
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
curl https://raw.githubusercontent.com/TheRosemaryProject/Sprig/main/sprig.exe > %INPUT%+'/sprig.exe'
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
