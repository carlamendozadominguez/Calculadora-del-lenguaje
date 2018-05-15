#include <iostream>
#include <string>
#include <cstdlib> 
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

class lenguajes{

private:

	set<std::string> s;
  	set<std::string> newSet;

public:

lenguajes();
~lenguajes();

void unir();
void interseccion();
void concatenacion();
void diferencia();
void igual();
void sublenguajes();
void inversa();
void potencia();

};

	
			
			
