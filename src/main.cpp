#include <iostream>
#include <geos/geom/GeometryFactory.h>
using namespace geos::geom;

int main() {
  GeometryFactory::Ptr factory = GeometryFactory::create();


  
  std::cout << "Hello, world! 2" << std::endl;
  return 0;
}
