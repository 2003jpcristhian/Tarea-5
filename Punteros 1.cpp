#include <iostream>
using namespace std;

main(){
	int edad=25, *p_edad; //*=Unidimensional & **Bidimensional
	p_edad=&edad;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	//cout<<"Puntero Edad: "<<&p_edad<<endl;
	cout<<"-----Cambiar valores-----"<<endl;
	*p_edad=40;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	
		cout<<"-----Otra variable a p_edad-----"<<endl;
	int edad2=100;
	p_edad=&edad2;
	edad=400;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	cout<<"Edad2: "<<edad2<<endl;
	
	system("pause");
}
