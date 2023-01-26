set /p INPUT= Install Directory:
IF %INPUT%==null (echo Installing In Home Directory) 
IF %INPUT%==null (%INPUT%=HOME)

curl https://github.com/TheRosemaryProject/Rosemary/tree/main/src/cpp/rsmy.exe > %INPUT%/rsmy.exe
curl https://github.com/TheRosemaryProject/Sprig/blob/main/sprig.exe > %INPUT%/sprig.exe
curl https://github.com/TheRosemaryProject/Sprig/blob/main/json.hpp > %INPUT%/json.hpp

setx path "%path%;%INPUT%"
rsmy
