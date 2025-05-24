#include <iostream>
#include <iomanip>

using namespace std;



void Promedios() {
   float notas[5];
   float promedio = 0.0;
   
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese la nota " << (i + 1) << ": ";
        cin >> notas[i];
        promedio += notas[i];
    }
	std::cout << std::fixed << std::setprecision(2);
	promedio /= 5;
    cout << "El promedio de las notas es: " << promedio<<endl;
	if (promedio < 70){
		cout<<"Estudiante ha Reprobado";
	}else if (promedio >= 70){
		cout<<"Estudiante ha Aprobado";
	}
}
int main(){
	cout<<" Calculador para 5 notas "<<endl;
	cout<<endl;
	Promedios();
	return 0;
}
