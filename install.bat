%ECHO% off
set /p INPUT= Install Directory: 
IF %INPUT%==null (echo Installing In Home Directory) 
IF %INPUT%==null (mkdir rsmy)
IF %INPUT%==null (%INPUT%=%UserProfile%+'rsmy')

curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/src/cpp/rsmy.exe > %INPUT%+'/rsmy.exe'
curl https://raw.githubusercontent.com/TheRosemaryProject/Sprig/main/sprig.exe > %INPUT%+'/sprig.exe'
curl https://raw.githubusercontent.com/TheRosemaryProject/Sprig/main/json.hpp > %INPUT%+'/json.hpp'

setx path "%path%;%INPUT%"
rsmy
