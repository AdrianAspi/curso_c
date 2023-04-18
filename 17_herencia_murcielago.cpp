#include <iostream>
#include <string>
#include "17_class_animal.cpp"

using namespace std;

class Murcielago:Animal{
    private:
    string nombre;
    public:
    Murcielago(string _nombre,string _familia,int _patas,int _dientes,bool _ojos,bool _orejas,bool _cola):Animal(_familia,_patas,_dientes,_ojos,_orejas,_cola){
        nombre=_nombre;
    }
    string getFamiliaM(){
        return familia;
    }
    void setFamiliaM(string _familiaM){
        familia=_familiaM;
    }
};
class Perro:Animal{
    private:
    int edad;
    public:
    Perro(int _edad,string _familia,int _patas,int _dientes,bool _ojos,bool _orejas,bool _cola):Animal(_familia,_patas,_dientes,_ojos,_orejas,_cola){
        edad=_edad;
    }
    string getFamiliaP(){
        return familia;
    }
    void setFamiliaP(string _familiaM){
        familia=_familiaM;
    }
};
class Gato:Animal{
    private:
    string nacionalidad;
    public:
    Gato(string _nacionalidad,string _familia,int _patas,int _dientes,bool _ojos,bool _orejas,bool _cola):Animal(_familia,_patas,_dientes,_ojos,_orejas,_cola){
        nacionalidad=_nacionalidad;
    }
    string getFamiliaG(){
        return familia;
    }
    void setFamiliaG(string _familiaM){
        familia=_familiaM;
    }
};