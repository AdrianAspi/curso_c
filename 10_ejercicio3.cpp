#include <iostream>
using namespace std;
int main(){
    //declaramos los arreglos productos y precio estos tendran el mismo tamaño
    string productos[5];
    int precio[5];
    //sacar el tamaño de un arreglo 
    int tamaño= sizeof(productos)/sizeof(productos[0]);
    //usamos for para recorrer los dos arreglos
    for(int i=0;i<tamaño;i++){
        //instrucciones para el ususario
        cout<<"agrega el producto ";
        //el usario escribe el producto en la pocicion i
        cin>>productos[i];
        cout<<"poner el precio al producto "<<productos[i]<<" ";
        //el usario escrebi el precio en la pocicion i
        cin>>precio[i];
    }
    //con ayuda del for se escribe el producto y el precio que le corresponde
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<productos[i]<<" = "<<precio[i];
    }
    cout<<"el tamaño maximo del arreglo es "<<tamaño;
    cout<<"el tamaño maximo del indice del arreglo es "<<tamaño-1;
    return 0;
}