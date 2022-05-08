#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    int m[3][3];
    int fila,columna, sumafila=0, nfila=0, mayorfila=0;
    
    for (fila=0;fila<3;fila++) {
        for (columna=0;columna<3;columna++) {
            cout<<"Introduce el valor de "<<"["<<fila<<"] "<<"["<<columna<<"]: \t";
            scanf("%i",&m[fila][columna]);
        } 
    }
    
    for (fila=0;fila<3;fila++) {
        sumafila=0;
        nfila=fila+1;
        for (columna=0;columna<3;columna++) {
            sumafila+=m[fila][columna];
            if (sumafila > mayorfila) {
                mayorfila=sumafila;
            }
        }
    }
    

    cout<<"La fila con mayor suma es la: "<<nfila<<" con una suma de: "<<mayorfila;
    
    return 0;
}