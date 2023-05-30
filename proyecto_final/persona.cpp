//librerias
#include <iostream>
#include <string>

using namespace std;

class Persona{
    protected:
    //atributos
    string nombre;
    string apellido;
    string dni;
    string direccion;
    string telefono;
    int edad;
    public:
    //constructor
    Persona(string _nombre="",string _apellido="",string _dni="",string _direccion="",string _telefono="",int _edad=0){
        nombre=_nombre;
        apellido=_apellido;
        dni=_dni;
        direccion=_direccion;
        telefono=_telefono;
        edad=_edad;
    }
    //getter and setter
    string getNombre(){
        return nombre;
    }
    void set(string _nombre){
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
    string getDireccion(){
        return direccion;
    }
    void setDireccion(string _direccion){
        direccion=_direccion;
    }
    string getTelefono(){
        return telefono;
    }
    void setTelefono(string _telefono){
        telefono=_telefono;
    }
    int getEdad(){
        return edad;
    }
    void setEdad(int _edad){
        edad=_edad;
    }
};