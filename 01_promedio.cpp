#include <iostream>
using namespace std;
int promedio(int n1,int n2,int n3);//funcion para calcular el promedio
int promedio(int n1,int n2,int n3){//nos pide las tres notas
    int prom=0;
    prom = (n1+n2+n3)/3;//se suma las notas y se divide entre 3
    return prom;//se retorna el resultado de la operacion en la linea 6 
}
int notas(int calificacion);//funcion para dar un valor segun el promedio de notas
int notas(int calificacion){//nos pide la calificacion que seria el promedio de notas
    int nota=0;
    /*se crea un if else anidado que vaya verificando en que rango esta tu calificacion 
    y segun ello darle un numero*/
    if(calificacion>=18){
        nota=1;
    }else{
        if(calificacion>=15){
            nota=2;
        }else{
            if(calificacion>=11){
                nota=3;
            }else{
                if(calificacion>=5){
                    nota=4;
                }else{
                    nota=5;
                }
            }
        }
    }
    return nota;//retorna los numeros asisgnado ala variable nota

}
int main(){
    //declaramos variable
    int calificacion;
    int respuesta;
    int nota_1,nota_2,nota_3;
    //escribimos instrucciones
    cout<<"ingrese sus notas \n";
    cin>>nota_1>>nota_2>>nota_3;
    //llama a la funcion promedio y saca el promedio y lo pones en la varible respuesta
    respuesta=promedio(nota_1,nota_2,nota_3);
    //llamamos a la funcion notas con el dato de la respuesta y lo ponemos a la variable calificacion
    calificacion=notas(respuesta);
    cout<<"tu promedio es "<<respuesta<<" y tu nota es ";
    /*una linea arriba se escribe la respuestay faltaria la nota para ello dentro de un switch pongamos
    la variable calificacion ya que depende de este tendra un numero u otro*/
    switch(calificacion){
        case 1:
        cout<<"A";
        break;
        case 2:
        cout<<"B";
        break;
        case 3:
        cout<<"C";
        break;
        case 4:
        cout<<"D";
        break;
        case 5:
        cout<<"E";
        break;
        default:
        cout<<"no tienes nota ";
        break;
    }
    return 0;
}