/*28/02/2023*/
#include <iostream>
using namespace std;
int area(int a,int h);
int area(int ancho,int altura){//se crea la funcion area y pide dos valores a 
    int area=0;//declaramos e inicializamos la variable area
    area=ancho*altura;//para hallar el area se multiplica el ancho por la altura
    return area;//retornamos la operacion hecha en la linea 6
}
int main (){
    int ancho,altura,respuesta;
    cout<<"hallar el area de un rectangulo "<<endl;
    cout<<"ponga el ancho del rectangulo "<<endl;
    cin>>ancho;//inicializamos el ancho
    cout<<"ponga la altura del rectangulo "<<endl;
    cin>>altura;//inicializamos la altura
    cout<<"la respuesta es "<<endl;
    respuesta=area(ancho,altura);//damos la funcion a
    cout<<respuesta;//escribimos la respuesta
    return 0;
}