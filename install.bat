@ECHO off
color B1
title Installing Rosemary
echo Installing in %cd%/rsmy
setx rsmypath %cd%/rsmy
setx path "%path%;%cd%/rsmy"
mkdir rsmy
cd rsmy
echo [~---------]
ping -n 1 localhost >nul
cls
echo [~~--------]
ping -n 1 localhost  >nul
curl  https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/docs/all-in-one.txt -o all-in-one.txt
cls
echo [~~~-------]
ping -n 1 localhost  >nul
cls
echo [~~~~------]
echo "Installing Rosemary shell..."
curl  https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/src/cpp/rsmy.exe -o rsmy.exe
echo Done"
ping -n 3 localhost  >nul
cls
echo [~~~~~-----]
ping -n 1 localhost  >nul
cls
echo [~~~~~~----]
ping -n 1 localhost  >nul
cls
echo [~~~~~~~---]
ping -n 1 localhost  >nul
cls
echo [~~~~~~~~--]
echo "Installing Rosemary package manager"
curl  https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/src/sprig/sprig.exe -o sprig.exe
echo Done"
ping -n 3 localhost  >nul
cls
echo [~~~~~~~~~-]
ping -n 1 localhost >nul
echo "you are fast at reading"
cls
echo [~~~~~~~~~~]
echo Installed!
echo Booting into your first session! :)
.\rsmy.exe
