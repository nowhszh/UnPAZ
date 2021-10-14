Provided CMakeList files will compile source code for all platform with boost
libraries.

### How to install depends boost libraries in linux

#### In Ubuntu:

``` shell
sudo apt install libboost-filesystem-dev -y
sudo apt install libboost-system-dev -y
```

Of course you can install the entire boost library instead of a part

`sudo apt install libboost-all-dev`

#### In other operating systems:

You can google "how to install boost-system and boost-filesystem for your
systems"

### Build

``` shell
mkdir build && cd build
cmake .. && make -j12



