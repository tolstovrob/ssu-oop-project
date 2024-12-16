echo "LOG: Clean previous build"
rm -rf build

echo "LOG: Make build directory"
mkdir build

echo "LOG: Move to build directory"
cd build

echo "LOG: Run CMake"
cmake ..

echo "LOG: Run cmake build"
cmake --build .

echo "LOG: Run main"
./main

echo "LOG: Move back to root directory"
cd ..