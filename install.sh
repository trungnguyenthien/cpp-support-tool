cd libs

mkdir geos && cd geos
tar -xzvf ../geos-202305.tar.gz --strip-components=1
mkdir build && cd build && cmake -DCMAKE_BUILD_TYPE=Release ..

cd ..