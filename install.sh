if [[ "$OSTYPE" == "linux-gnu"* ]]; then
   curl https://github.com/TheRosemaryProject/Rosemary/tree/main/src/cpp/rsmy.unix > $INPUT/rsmy.unix
   curl https://github.com/TheRosemaryProject/Sprig/blob/main/sprig.unix > $INPUT/sprig.unix
   curl https://github.com/TheRosemaryProject/Sprig/blob/main/json.hpp > $INPUT/json.hpp
