#include <iostream>
using namespace std;
int main(){
    //declaramos las variable y/o arreglos
    int num[25];
    int ordenar[25];
    int promedio;
    int media;
    int suma=0;
    //hallamos el tamaño de los arreglos
    int tamaño= sizeof(num)/sizeof(num[0]);
    //el usuario pone los numeros
    for(int i =0;i<tamaño;i++){
        cin>>num[i];
    }
    //ordenamos los numeros en el arreglo
    int menor;//lo usamos en la condicon if
    for(int i=0;i<tamaño-1;i++){
        //el numero con el que se compara si es menor es el mismo que el numero que esta el bucle
        menor=num[i];
        for(int j=i+1;j<tamaño;j++){
            //saber si es menor ala variable qeu esta en el siguiente arreglo por eso se j empieza en i + 1
            if(menor>num[j]){
                menor=num[j];//si cumple la condicion remplazamos por el nuevo nuemero menor 
                ordenar[i]=num[j];//se guarda el numero menor en otro arreglo
                num[j]=num[i];//se coloca el numero que no es menor en la que el arreglo con la posicion j
                num[i]=ordenar[i];//se remplaza el arreglo en la posicion i por el numero menor anteriormente guardado
            }
        }
    }
    //escribimos la suma de todos los datos del arreglo
    for(int i=0;i<tamaño;i++){
        suma=num[i]+suma;
    }
    cout<<"la suma total de todos los datos es: "<<suma<<endl;
    //escribimos el arreglo del 0 al tamaño - 1
    cout<<"numeros ordenados de menor a mayor son: ";
    for(int i=0;i<tamaño;i++){
        cout<<num[i]<<"; ";
    }
    //escribimos el arreglo del tamaño - 1 al 0
    cout<<"\n"<<"numeros ordenados de mayor a menor son: ";
    for(int i=tamaño-1;i>-1;i=i-1){
        cout<<num[i]<<"; ";
    }
    //hallamos el promedio y lo escribimos
    promedio=suma/tamaño;
    cout<<"el promedio es: "<<promedio<<endl;
    //la media se saca al dividir entre dos al tamaño del arreglo y cuando este es impar se redonde hacia aajo y este simpre sera el medio 
    media=tamaño/2;
    cout<<"la media del arreglo es: "<<num[media]<<endl;
    //podemos remplazar la posicion media del arreglo
    cout<<"escriba el numero de la posision media del arreglo"<<endl;
    cin>>num[media];
    return 0;
}