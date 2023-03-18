#include <iostream>
using namespace std;
int main(){
    //declaramos el arreglo libros
    string libros[5];
    //buscamos el tamaño del arreglo y lo ponemos en la variable tamaño
    int tamaño= sizeof(libros)/sizeof(libros[0]);
    //creamos un for que recorra desde la posicion inicial hasta el tamaño del arreglo con salto de 1
    for(int i=0;i<tamaño;i++){
        //damos instrucciones al usuario
        cout<<"\n"<<"ingrese el producto["<<i<<"]";
        //el usuario pone el libro que quieralas veces que duere el bucle de for
        cin>>libros[i];
    }
    //con ayuda del for escribimos todos los datos del arreglo 
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<"el producto["<<i<<"] = "<<libros[i];
    }
    return 0;
}