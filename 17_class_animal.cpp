#include <iostream>
#include <string>

using namespace std;

class Animal{
    protected:
    //atributos
    string familia;
    int patas;
    int dientes;
    bool ojos;
    bool orejas;
    bool cola;
    public:
    //constructor
    Animal(string _familia,int _patas,int _dientes,bool _ojos,bool _orejas,bool _cola){
        familia=_familia;
        patas=_patas;
        ojos=_ojos;
        dientes=_dientes;
        orejas=_orejas;
        cola=_cola;
    }
    string getFamilia(){
        return familia;
    };
};