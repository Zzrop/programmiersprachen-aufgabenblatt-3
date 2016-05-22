# define CATCH_CONFIG_RUNNER
# include "catch.hpp"
# include <cmath>
# include <algorithm>
bool is_even(unsigned int n)
  {
  return (n%2==0);
  }
bool is_odd(unsigned int m)
  {
  return !is_even(m);
  }
TEST_CASE ("describe_factorial","[aufgabe3]")
{
  std::vector <int> v(100);
  for (std::vector <int>::iterator i =v.begin();i != v.end();++i )
    {
    *i = std::rand() % 101;
    }
  v.erase(std::remove_if(v.begin(), v.end(),is_odd), v.end());
  /*for(auto const& it : v){
    std::cout << it << std::endl;
  }*/

REQUIRE ( std::all_of(v.begin(),v.end(),is_even));
}

int main (int argc, char * argv[])

{
return Catch::Session().run( argc,argv);
}
