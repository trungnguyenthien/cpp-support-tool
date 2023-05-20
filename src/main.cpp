#include <iostream>
#include <geos/geom/GeometryFactory.h>
using namespace geos::geom;
#include "temp/temp.h"

int main() {
  GeometryFactory::Ptr factory1 = GeometryFactory::create();
  GeometryFactory::Ptr factory2 = GeometryFactory::create();
  GeometryFactory::Ptr factory3 = GeometryFactory::create();
  GeometryFactory::Ptr factory4 = GeometryFactory::create();
  std::cout << "Hello, world! 2" << std::endl;
  std::cout << "Hello, world! 3" << std::endl;
  std::cout << "Hello, world! 4" << std::endl;
  // std::cout << "Hello, world! 5" << std::endl;
  AAA aaa;
  aaa.printHello();
  return 0;
}
