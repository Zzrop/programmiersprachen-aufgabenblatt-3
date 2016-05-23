# define CATCH_CONFIG_RUNNER
# include "catch.hpp"
#include <cmath>
//#include <algorithm>
#include "circle.hpp"
//#include <cstdlib>
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include "circle.hpp"

bool operator<(Circle c1,Circle c2){
  return (c1.r()<c2.r());
}
bool operator>(Circle c1,Circle c2){
  return (c1.r()>c2.r());
}
bool operator==(Circle c1,Circle c2){
  return (c1.r()==c2.r());
}


TEST_CASE ("describe_sorted","[aufgabe8]")
{
  std::vector<Circle> v0(10);
for ( std::vector <Circle>::iterator i =v0.begin();i != v0.end();++i )
  {
    *i = Circle{(float)std::rand()};
  }
std::sort (v0.begin(), v0.end(), [](Circle const& a,Circle const& b){return a.r() < b.r();});
REQUIRE(std::is_sorted(v0.begin(), v0.end()));
}


int main (int argc, char * argv[])
{
return Catch::Session().run( argc,argv);
//std::copy ( std::begin(v0), std::end(v0),std::ostream_iterator <double>(std::cout," \n "));
  //std::cout << v0[2];
}