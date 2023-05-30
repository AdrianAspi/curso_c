#include <iostream>
#include <string>
#include "17_class_animal.cpp"

using namespace std;

//clase murcielago 

class Murcielago:Animal{
    private:
    //atributos
    string nombre;
    public:
    //contructor con herencia
    Murcielago(string _nombre,string _familia,int _patas,int _dientes,bool _ojos,bool _orejas,bool _cola):Animal(_familia,_patas,_dientes,_ojos,_orejas,_cola){
        nombre=_nombre;
    }
    //getter and setter
    string getFamiliaM(){
        return familia;
    }
    void setFamiliaM(string _familiaM){
        familia=_familiaM;
    }
};

//clase perro

class Perro:Animal{
    private:
    //atributo
    int edad;
    //contructor con herencia
    public:
    Perro(int _edad,string _familia,int _patas,int _dientes,bool _ojos,bool _orejas,bool _cola):Animal(_familia,_patas,_dientes,_ojos,_orejas,_cola){
        edad=_edad;
    }
    //getter and setter
    string getFamiliaP(){
        return familia;
    }
    void setFamiliaP(string _familiaM){
        familia=_familiaM;
    }
};

//clase gato

class Gato:Animal{
    private:
    //atributo
    string nacionalidad;
    public:
    //constructor conherencia
    Gato(string _nacionalidad,string _familia,int _patas,int _dientes,bool _ojos,bool _orejas,bool _cola):Animal(_familia,_patas,_dientes,_ojos,_orejas,_cola){
        nacionalidad=_nacionalidad;
    }
    //getter and setter
    string getFamiliaG(){
        return familia;
    }
    void setFamiliaG(string _familiaM){
        familia=_familiaM;
    }
};