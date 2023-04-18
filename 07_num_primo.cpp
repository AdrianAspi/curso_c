/*16/03/2023*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //declaramos las variables
    int i;
    int num;
    int *puntero;
    bool es_primo=true;
    cout<<"Ingrese un numero entero: ";
    cin>>num;
    /* Probamos todos los posibles divisores desde 2 hasta la raíz cuadrada del número
    se hace esto ya que si hay un divisor que se mayor al su raiz cuadrada significa
    que hay otro divisor mas pequeñoy por eso solo se saca prueba los numeros menores 
    de su raiz cuadrada*/
    for(i=2;i<= sqrt(num);i++){
        /*dentro de la condicional if se representa lo siguiente: el resto de la variable 
        num es igual a cero este no es primo*/
        if(num%i==0){
            es_primo=false;
            break;
        }
    }
    //con esta condicional se escribre si es primo o no
    if(es_primo){
        cout<<num<<" es primo su direccion en memoria es ";
    } else {
        cout<<num<<" no es primo su direccion en memoria es ";
    }
    //num  se pone en el puntero p
    puntero=&num;
    //se escribe el espacio en memoria
    cout<<puntero;
    return 0;
}