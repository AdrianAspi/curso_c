#include <iostream>
using namespace std;
int main(){
    int num[25];
    int ordenar[25];
    int promedio;
    int media;
    //hallamos el tamaño de larreglo
    int tamaño= sizeof(num)/sizeof(num[0]);
    //el usuario pone los numeros
    for(int i =0;i<tamaño;i++){
        cin>>num[i];
    }
    //ordenamos los 
    int menor;
    for(int i=0;i<tamaño-1;i++){
        menor=num[i];
        for(int j=i+1;j<tamaño;j++){
            if(menor>num[j]){
                menor=num[j];
                ordenar[i]=num[j];
                num[j]=num[i];
                num[i]=ordenar[i];
            }
        }
    }
    int suma=0;
    for(int i=0;i<tamaño;i++){
        suma=num[i]+suma;
    }
    cout<<"la suma total de todos los datos es: "<<suma<<endl;
    cout<<"numeros ordenados de menor a mayor son: ";
    for(int i=0;i<tamaño;i++){
        cout<<num[i]<<"; ";
    }
    cout<<"\n"<<"numeros ordenados de mayor a menor son: ";
    for(int i=tamaño-1;i>-1;i=i-1){
        cout<<num[i]<<"; ";
    }
    promedio=suma/tamaño;
    cout<<"el promedio es: "<<promedio<<endl;
    media=tamaño/2;
    cout<<"la media del arreglo es: "<<num[media]<<endl;
    cout<<"escriba el numero de la posision media del arreglo"<<endl;
    cin>>num[media];
    return 0;
}