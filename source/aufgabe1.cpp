#include <cstdlib>		//std :: rand ()
#include <vector>		//std :: vector < >
#include <list>			//std :: list < >
#include <iostream>		//std :: cout
#include <iterator>		//std :: ostream_iterator < >
#include <algorithm>	//std :: reverse , std :: generate


int main ()
{
std::vector <int> v0(10); 
for (std::vector <int>::iterator it = v0.begin();
		it != v0.end(); ++it ) {
		*it = std::rand();
}//Füllt einen vector v0 mit einer Länge von 10 mit random nummern

// oder
// for ( auto & v : v0 ) {
// v = std :: rand ();
// }
std::copy(std::begin(v0), std::end(v0),
			std::ostream_iterator<int>(std::cout, "\n"));
//zeigt die 10 zufälligen zahlen nacheinander
std::list<int> l0(v0.size());
std::copy(std::begin(v0), std::end(v0), std::begin(l0));//erstellt eine liste mit der länge von v0 und füllt sie mit den zahlen aus v0

std::list<int> l1 (std::begin(l0), std::end(l0));//Erstellt eine liste l1 die mit den nummern aus l0 gefüllt wird
std::reverse(std::begin(l1), std::end(l1));
std::copy (std::begin(l1), std::end(l1),
			std::ostream_iterator <int>(std::cout , "\n" ));//dreht die reihenfolge der zahlen um und printet sie aus

l1.sort ();//sortiert die Zahlen in l1 anhand ihrer größe...
std::copy (l1.begin(), l1.end() ,
			std::ostream_iterator<int>( std::cout, "\n" ));//und printet sie aus

std::generate(std::begin(v0), std::end(v0), std::rand);//führt auf v0 die random funktion auf=>v0 wird mit neuen zufallszahlen aufgefüllt und ausgeprintet
std::copy(v0.rbegin(), v0.rend(),
			std::ostream_iterator<int>(std::cout, "\n" ));
return 0;
}