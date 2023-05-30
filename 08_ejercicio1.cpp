#include <iostream>
using namespace std;
int main(){
    //declaramos e incializamos variable con arreglos
    string producto[5]={"televisor","monitor","celular","cargador","parlante"};
    producto[2]="computadora";//cambiamos la tercera poccion del arreglo por otra cadena
    //con la siguiente operacion encontramos el tamaño del arreglo y lo ponemos en la variable tamaño
    int tamaño= sizeof(producto)/sizeof(producto[0]);
    //con el for escribiremos cada posision del arreglo
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<"el producto["<<i<<"] = "<<producto[i];
    }
    return 0;
}