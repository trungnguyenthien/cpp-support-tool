mkdir  -p libs/geos && cd libs/geos
tar -xzvf ../../zips/geos-202305.tar.gz --strip-components=1
cd ../..
mkdir build && cd build && cmake -DCMAKE_BUILD_TYPE=Release ..

