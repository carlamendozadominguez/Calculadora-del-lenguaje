#include "lenguajes.hpp"

lenguajes::lenguajes(){

	
  set<std::string> cadena;
  int n;
  string L1;

	cout<<"LENGUAJE 1"<<endl;

	cout<<"NUMERO DE CADENAS DEL LENGUAJE 1:";
	cin>>n;
 int i=1;
 int aux=0;

	while(aux!=n){

		cout<<"Cadena "<<i<<":";
		cin>>L1;

  		newSet.insert(L1);
  
		aux++;
		i++;
	}

	cadena.insert(newSet.begin(), newSet.end());

	cout<<"EL LENGUAJE 1:{";

	for (set<string>::iterator i = newSet.begin(); i != newSet.end(); i++)
		cout <<(*i)<<","; 

	cout<<"}";
	cout<<endl<<endl;


	cout<<"LENGUAJE 2"<<endl;
	cout<<"NUMERO DE CADENAS DEL LENGUAJE 2:";
	cin>>n;

 int i1=1;
 int aux1=0;

string L2;

	while(aux1!=n){
		cout<<"Cadena "<<i1<<":";
		cin>>L2;
		s.insert(L2);
  
	aux1++;
	i1++;
	}

	cadena.insert(s.begin(), s.end());

	cout<<"EL LENGUAJE 2:{";
	for (set<string>::iterator j = s.begin(); j != s.end(); j++)
		cout <<(*j)<<","; 

	cout<<"}";
	cout<<endl<<endl;

}


lenguajes::~lenguajes(){
}

//****************UNION*******************

void lenguajes::unir(){

	set<std::string> cadena;

	cadena.insert(s.begin(), s.end());
	cadena.insert(newSet.begin(), newSet.end());

	cout<<"UNION: L1 U L2"<<endl;
	cout<<"{";

	for (set<string>::iterator i = cadena.begin(); i != cadena.end(); i++)
		cout <<(*i)<<","; 

	cout<<"}";
	cout<<endl;

}

//************INTERSECCION***************

void lenguajes::interseccion(){


set<std::string> a;

	for (set<string>::iterator i = newSet.begin(); i != newSet.end(); i++){

		for (set<string>::iterator j = s.begin(); j != s.end(); j++){
	
			if(*i==*j){
	
			   a.insert(*i);
	
			}
		}
	}

  	
	cout<<endl<<"INTERSECCION:{";

	for (set<string>::iterator k= a.begin(); k != a.end(); k++)

	    cout<<(*k)<<",";

	cout<<"}"<<endl;

}


//*************IGUALDAD************

void lenguajes::igual(){

 set<std::string> cadena;

	cadena.insert(s.begin(), s.end());
	cadena.insert(newSet.begin(), newSet.end());

	if(s.size()!=newSet.size())
	   cout<<"CADENAS DIFERENTES"<<endl;

	else{

		if(cadena.size()==s.size() and cadena.size()==newSet.size())
			cout<<"CADENAS IGUALES"<<endl;

		else{

			cout<<"CADENAS DIFERENTES"<<endl;
		     }

	     }
}



//**************SUBLENGUAJE*****************

void lenguajes::sublenguajes(){

 int p=0;

	if(newSet.size()> s.size())
		cout << "L1 no es sublenguaje de L2." <<endl;


	else{

		for (set<string>::iterator i = newSet.begin(); i != newSet.end(); i++){

			for (set<string>::iterator j = s.begin(); j != s.end(); j++){
	
				if(*i==*j){
	
				   p++;
	
				}
			}
		}

		if(p==0)
		  cout << "L1 no es sublenguaje de L2." <<endl;

		else{
		   cout << "L1  es sublenguaje de L2." <<endl;
		}
	}
}


//*************INVERSA****************************

void lenguajes::inversa(){

set<std::string> cadena;
set<std::string> aux2;

cadena.insert(newSet.rbegin(),newSet.rend());

for (set<string>::iterator i =cadena.begin(); i !=cadena.end(); i++){

        string inver=*i;
	inver=string(inver.rbegin(),inver.rend());
	aux2.insert(inver);
	
}

cout<<"INVERSA L1:{";
for (set<string>::iterator i =aux2.begin(); i !=aux2.end(); i++)
	cout<<" "<<(*i);

cout<<"}";
}



//***********************CONCATENACION********************

void lenguajes::concatenacion(){

cout<<"CONCATENACION:{";

for (set<string>::iterator i =newSet.begin(); i !=newSet.end(); i++){
	for (set<string>::iterator j =s.begin(); j !=s.end(); j++){
		cout<<(*i)<<(*j)<<",";
	}
}

	cout<<"}";

}



//*********************DIFERENCIA**************************

void lenguajes::diferencia(){


cout<<"DIFERENCIA:{";
set <string> C;  
	set_difference(newSet.begin(), newSet.end(), s.begin(), s.end(), inserter(C, C.begin()));

for (set<string>::iterator i =C.begin(); i !=C.end(); i++)
	cout<<(*i)<<",";

	cout<<"}";
}




//*************POTENCIA***********************


void lenguajes::potencia(){

int poten;
set<std::string> cad;
set<std::string> aux2;
int p=0;

cout<<"A que numero desea elevar el lenguaje?";
cin>>poten;
int t=0;

if (poten==0){
cout<<"L^0:{&}";
}

/*else{
*/
}
