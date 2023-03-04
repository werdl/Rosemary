echo "Installing Rosemary"
echo "Installing in $(pwd)/rsmy"
echo "WARNING: SUDO NEEDED"
sleep 4
mkdir rsmy
cd rsmy
curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/docs/all-in-one.txt -o all-in-one.txt
curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/src/cpp/rsmy -o rsmy
chmod 777 rsmy
sudo curl  https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/docs/rsmy.1.gz -o /usr/share/man/man1/rsmy.1.gz
curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/src/sprig/sprig -o sprig
chmod 777 sprig
echo "Install successful"
echo "To use Rosemary add this line to your .bashrc:"
echo "export PATH=\"$(pwd):\$PATH\""
echo "Enjoy"
./rsmy