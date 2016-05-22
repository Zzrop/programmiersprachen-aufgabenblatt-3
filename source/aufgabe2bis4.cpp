#include <cstdlib>
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <map>

int main ()
{
  std::list <int> li(100);
  std::map <unsigned int, int> m1{};

  for (int i=0; i<101; ++i)
    {
      m1[i]=0;
    }

  for ( std::list <int>::iterator i =li.begin();i != li.end();++i )
        {
            *i = std::rand() % 101;
          }

  std::vector <int> v0(100);

  std::copy (li.begin(), li.end(), std::begin(v0));

  for (int i=0; i<101;++i)
  {
    m1[v0[i]]=m1[v0[i]]+1;
  }

     for(int i=0; i<100;++i)
    {
      if (m1[i] == 0)
      {
        std::cout<< i <<"\n";
      }
    }
  for(auto it = m1.cbegin(); it != m1.cend(); ++it)
{
    std::cout << it->first << " " << it->second << "\n";
}

  /*std::copy (std::begin(v0), std::end(v0),
    std::ostream_iterator <int>(std::cout," \n "));*/
return 0;
}
