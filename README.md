# C++ Template Meta Programming (TMP) Primer

This repo requires C++14 to compile. We provide CMake files to build the project but this isn't necessary. You will need a C++14 compliant compiler however. This is provided by XCode on Mac OS X.

## Building without CMake

You can build the project from the root directory with the following:

```
c++ -std=c++1y -stdlib=libc++ src/main.cpp -o tmp
```

And then you can run the executable via `./tmp`

## Building with CMake

If you don't have it, you can install CMake via brew with:

```
brew install cmake
```

Then do the following for you first build:

```
mkdir build
cd build
cmake ..
make
```

For all future builds, simple run `make` within the `build` directory.
