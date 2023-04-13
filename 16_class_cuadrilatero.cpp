/*Elaborar un ejercicio
elabore un clase denominada cuadrilátero, implemente sus atributos y métodos
resuelva las siguiente interrogantes

--> declarar 3 objetos de tipo cuadrado
   modifique los lados de 2 objetos
   realice la sumatoria de los lados por objeto y el total
   realice el calculo del area y perimetro de cada objeto
   calcule la sumatoria de las areas de todos lo objeto
  calcule la sumatoria del perimetro de todos los objetos*/
#include <iostream>
#include <string>
using namespace std;
class Cuadrilatero{
    private:
    int lado_1,lado_2;
    public:
    //constructor
    Cuadrilatero(int _lado_1,int _lado_2){
        lado_1=_lado_1;
        lado_2=_lado_2;
    }
    //get and set
    int getLado_1(){
        return lado_1;
    }
    int getLado_2(){
        return lado_2;
    }
    void setLado_1(int lado1){
        lado_1=lado1;
    }
    void setLado_2(int lado2){
        lado_2=lado2;
    }
    void setLado_1_and_2(int lado1,int lado2){
        lado_1=lado1;
        lado_2=lado2;
    }
    //suma de lados
    int getSuma_lados(){
        return lado_1+lado_2;
    }
    //perimetro
    int getPerimetro(){
        return 2*(lado_1+lado_2);
    }
    //area
    int getArea(){
        return lado_1*lado_2;
    }
};
int main(){
    Cuadrilatero cuadrado_1(9,9);
    Cuadrilatero cuadrado_2(12,12);
    Cuadrilatero cuadrado_3(15,15);
    cuadrado_2.setLado_1_and_2(10,11);
    cuadrado_3.setLado_1_and_2(18,25);
    cout<<"la suma de los 2 lados del cuadrado 1 es : "<<cuadrado_1.getSuma_lados()<<"\n";
    cout<<"la suma de los 2 lados del cuadrado 2 es : "<<cuadrado_2.getSuma_lados()<<"\n";
    cout<<"la suma de los 2 lados del cuadrado 3 es : "<<cuadrado_3.getSuma_lados()<<"\n";
    cout<<"la suma de los 2 lados de los 3 cuadrados es : "<<cuadrado_1.getSuma_lados()+cuadrado_2.getSuma_lados()+cuadrado_3.getSuma_lados()<<"\n";
    cout<<"el perimetro del cuadrado 1 es :  "<<cuadrado_1.getPerimetro()<<"\n";
    cout<<"el perimetro del cuadrado 2 es :  "<<cuadrado_2.getPerimetro()<<"\n";
    cout<<"el perimetro del cuadrado 3 es :  "<<cuadrado_3.getPerimetro()<<"\n";
    cout<<"la suma de los perimetros de los 3 cuadrados es : "<<cuadrado_1.getPerimetro()+cuadrado_2.getPerimetro()+cuadrado_3.getPerimetro()<<"\n";
    cout<<"el area del cuadrado 1 es : "<<cuadrado_1.getArea()<<"\n";
    cout<<"el area del cuadrado 2 es : "<<cuadrado_2.getArea()<<"\n";
    cout<<"el area del cuadrado 3 es : "<<cuadrado_3.getArea()<<"\n";
    cout<<"la suma de las areas de los tres cuadrados es : "<<cuadrado_1.getArea()+cuadrado_2.getArea()+cuadrado_3.getArea()<<"\n";
    return 0;
}