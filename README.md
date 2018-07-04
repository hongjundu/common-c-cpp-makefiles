# common make files for C/C++ projects

## define compiler

* C project
    
        export COMPILER=gcc


* C++ project

        export COMPILER=g++

## local build
* cd to source folder
        make

## cross-build
* install corresponding cross-compiler, take ARM cross-compiler as an example
        $ sudo apt-get install libc6-armel-cross libc6-dev-armel-cross
        $ sudo apt-get install binutils-arm-linux-gnueabi
        $ sudo apt-get install libncurses5-dev
        $ sudo apt-get install gcc-arm-linux-gnueabihf
        $ sudo apt-get install g++-arm-linux-gnueabihf
* cd to source folder
        make CROSS=arm-linux-gnueabihf- TARGET_FOLDER=arm



