#include <iostream>

using namespace std;

int mat[5][3],fila,columna;

int SumaFilaPar(int mat[][3]);
int SumaFilaPar(int mat[][3]){
    int suma=0;
    for(fila=0;fila<5;fila+=2){
        for(columna = 0; columna <3 ; columna++){
            suma += mat[fila][columna];
            }
    }
    return suma;
}
 
void CargarMat();
void CargarMat(){
    cout<<"Ingrese 15 numeros: "<<endl;
    for(fila=0; fila<5; fila++){
        for(columna=0; columna<3; columna++){
            cin>>mat[fila][columna];
        }
    }
}

int main(){
    CargarMat();
    cout << "La sumatoria de las filas pares es: " << SumaFilaPar(mat);
    return 0;
}
