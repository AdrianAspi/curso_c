#include <iostream>
#include <string>
#include "17_herencia_murcielago.cpp"
using namespace std;
int main(){
    //declaracion en inicializacion
    Murcielago aea("a","b",4,5,true,true,false);
    Perro aea1(2,"b",4,5,true,true,false);
    Gato aea2("a","b",4,5,true,true,false);
    //probar los getter and setter
    aea.setFamiliaM("mamifero");
    cout<<aea.getFamiliaM()<<"\n";
    aea1.setFamiliaP("fgasa");
    cout<<aea1.getFamiliaP()<<"\n";
    aea2.setFamiliaG("hgtefw");
    cout<<aea2.getFamiliaG()<<"\n";
    return 0;
}