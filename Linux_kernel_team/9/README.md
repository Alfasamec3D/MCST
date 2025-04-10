# Task 9

This algorythm accepts an array (actually vector) of numbers and gives indexes of the first and the last (adding 1) elements of continuous subarray with the largest sum of its elements.

## How to build

1. Copy the repository
2. Go to the source tree directory (the one containing `CMakeLists.txt` file, `../9`)
3. Generate a project buildsystem, then build the project through terminal. On linux just use

   `cmake -S . -B build -DCMAKE_BUILD_TYPE=Release && cmake --build ./build`

   command.
   
5. Wait till the building is finished.

## How to test

1. Go to the build tree directory (`../9/build`)
2. In terminal use `make test` command.
3. See the results of the test.

## How to launch

1. In the same directory enter `./ui` command.
2. Enjoy the program.
