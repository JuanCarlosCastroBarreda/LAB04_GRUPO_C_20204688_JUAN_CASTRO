#include <iostream>
#include <string>

using namespace std;

int tam = 8;

bool buscar(int v[],int val){
    for(int i=0; i<tam; i++){
        if(val==v[i]){
            return true; 
        }
    }
    return false;
}

int main(){
    int x,valor,array[tam];
    
    cout<<"Ingrese 8 numeros: "<<endl;
   
    for(int i = 0; i < tam; i++){
        cin>>array[i];
    }
    cout<<"Ingrese el numero que quiere buscar: "<<endl;
    cin>>x;
    
    valor = buscar(array,x);
    if(valor){
        cout<<"Valor encontrado: "<<x;
    }
    else{
        cout<<"Valor no encontrado";
    }
    return 0;
}