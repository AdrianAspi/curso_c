/*14/03/2023*/
#include <iostream>
using namespace std;
int main(){
    //declaracion de variables
    int num;
    int respuesta;
    int *puntero;
    //mandamos instrucciones
    cout<<"escribir un numero\n";
    cin>>num;
    /*el residuo de la variable num dividido en 2 solo pueden ser 1 o 0 y le 
    damos ese valor ala variable respuesta*/
    respuesta=num%2;
    //en la siguiente condicional evaluaremos si la repuesta es igual a1 entonces el numero es impar 
    //de lo contrario el numero es par
    if(respuesta==1){
        cout<<num<<" es impar\n";
    } else {
        cout<<num<<"es par\n";
    }
    //le damos la direcion de memoria de num a puntero
    puntero=&num;
    cout<<"su direccion en memoria es "<<puntero;
    return 0;
}