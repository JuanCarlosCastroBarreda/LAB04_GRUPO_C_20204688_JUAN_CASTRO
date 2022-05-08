#include <iostream>
#include <string>

using namespace std;

int main(){
    string nombre[3];
    string apellido[3];
    string edad[3];
    string dni[3];
    cout << "Por favor ingrese la siguiente información de 3 Personas: \n";
    for(int i=0; i<3; i++){
        cout << "\n******* Persona " << i+1 <<"********:\n";
        cout << "Nombre: ";
        getline(cin,nombre[i]);
        cout << "Apellido: ";
        getline(cin,apellido[i]);
        cout << "Edad: ";
        getline(cin,edad[i]);
        cout << "DNI: ";
        getline(cin,dni[i]);

        cout <<"Hola "<<nombre[i]<<" "<<apellido[i]<<" tienes "<<edad[i]<<" anios y tu DNI es: "<<dni[i]<<endl;
        
    }
}