/*09/03/2023*/
#include <iostream>
using namespace std;
int edad(int year);//funcion para calcular la edad de una persona solo con el año de nacimiento
int edad(int year){
    int edad=0;//declaramos e inicializamos la variable edad
    edad=2023-year;//al año actual le restamos el año de nacimiento que seria la variable year
    return edad;//el valor que tomara la funcion es el resultado de la operacion hecha en la linea 6
}
int main (){
    //declaramos las variables
    int año;
    int respuesta;
    //mandamos instrucciones
    cout<<"hallar tu edad con tu año de naciemiento"<<endl;
    cout<<"coloque su año de nacimiento"<<endl;
    cin>>año;
    cout<<"tu edad es"<<endl;
    //llamamos ala funcion edad segun la variable año y lo ponemos en la variable respuesta
    respuesta=edad(año);
    //en la condicional preguntamos si la respuesta es menor o igual a 17 y depende de la repuesta este sera una u otra
    if(respuesta<=17){
        cout<<"eres menor de edad"<<endl;
    } else {
        cout<<"eres mayor de edad"<<endl;
    }
    cout<<"tu edad es: "<<respuesta;
    return 0;
}