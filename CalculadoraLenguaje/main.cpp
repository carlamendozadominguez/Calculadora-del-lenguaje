#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <algorithm>
#include <set>
#include "lenguajes.hpp"

using namespace std;

int main(void){

int opcion;
lenguajes L;

do{

cout<<endl<<'\t'<<'\t'<<'\t'<< "  MENU "<<endl;
		cout<<'\t'<<"________________________________________"<<endl<<endl;
		cout<<'\t'<<"          1.Potencia "<<endl;
		cout<<'\t'<<"          2.Inversa"<<endl;
		cout<<'\t'<<"          3.Concatenacion"<<endl;
		cout<<'\t'<<"          4.Union"<<endl;  //DO IT
		cout<<'\t'<<"          5.Interseccion"<<endl;   // DO IT
		cout<<'\t'<<"          6.Diferencia"<<endl;  
		cout<<'\t'<<"          7.Sublenguajes"<<endl;	//DO IT
		cout<<'\t'<<"          8.Igualdad de lenguajes"<<endl; //DO IT
		cout<<'\t'<<"          9.Salir"<<endl;
		cout<<'\t'<<"________________________________________"<<endl;
		cout<<'\t'<<"		>>>Introduzca una opcion:"<<endl;
	        cin>>opcion;
	

		switch(opcion){
			case 1:
				L.potencia();
			break;

			case 2:
				L.inversa();
			break;

			case 3:
				L.concatenacion();
			break;
				
			case 4:
				L.unir();
			break;
				
			case 5:
				L.interseccion();
			break;
				
			case 6:
				L.diferencia();
			break;
				
			case 7:
				L.sublenguajes();
			break;
				
			case 8:
				L.igual();
			break;
				
			case 9:
			
			cout<<"Saliendo..."<<endl;
				
			break;
				
			  default:
			   cout << "Esa opcion no es valida.\n";

			cout << endl;
				
		}	
		}
	      
		while (opcion !=9 );
	
}
