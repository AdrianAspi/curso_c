//librerias
#include <iostream>
#include <string>

using namespace std;

//clase
class Persona{
    //atributos con herencia
    protected:
    string nombre;
    string apellido;
    string dni;
    string telefono;
    string sexo;
    string direccion;
    int edad;
    public:
    //constructor
    Persona(string _nombre="", string _apellido="", string _dni="", string _telefono="", string _sexo="", string _direccion="", int _edad=0){
        nombre=_nombre;
        apellido=_apellido;
        dni=_dni;
        telefono=_telefono;
        sexo=_sexo;
        direccion=_direccion;
        edad=_edad;
    }
    //getter and setter
    string getNombre(){
        return nombre;
    }
    void setNombre(string _nombre){
        nombre=_nombre;
    }
    string getApellido(){
        return apellido;
    }
    void setApellido(string _apellido){
        apellido=_apellido;
    }
    string getDni(){
        return dni;
    }
    void setDni(string _dni){
        dni=_dni;
    }
    string getTelefono(){
        return telefono;
    }
    void setTelefono(string _telefono){
        telefono=_telefono;
    }
    string getSexo(){
        return sexo;
    }
    void setSexo(string _sexo){
        sexo=_sexo;
    }
    string getDireccion(){
        return direccion;
    }
    void setDireccion(string _direccion){
        direccion=_direccion;
    }
    int getEdad(){
        return edad;
    }
    void setEdad(int _edad){
        edad=_edad;
    }
};