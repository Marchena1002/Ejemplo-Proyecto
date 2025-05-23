#include <iostream>
#include <string>

using namespace std;

 void Usuarios(){
    string nombreCompleto;
    int Cedula; 
    cout<< "Ingrese su Nombre Completo: ";
    getline(cin, nombreCompleto);
    cout<<"Ingrese su Numero de Cedula (No se aceptan caracteres especiales ni letras)"<<endl;
    cout<< "(Ejemplo: 101110111): ";
	cin>>Cedula;
	cout<<nombreCompleto<<" "<<Cedula<<endl;
    return ;
 }
int main(){
	
	Usuarios();
	
	return 0;
}
