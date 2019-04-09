mkdir build;
cd build;
../configure CXXFLAGS="-g -DDEBUG" #debug
make

echo "mkdir bin -p" > cp2bin.sh
echo "cp src/test bin/" >> cp2bin.sh
chmod +x cp2bin.sh

./cp2bin.sh