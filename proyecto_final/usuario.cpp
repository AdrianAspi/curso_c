//librerias
#include <iostream>
#include <string>
#include "persona.cpp"
#include "producto.cpp"

using namespace std;

//herencia de persona
class Usuario:Persona{
    private:
    //atributos basicos
    string codigo;
    string correo;
    string contraseña;
    float sueldo;
    //atributos secundarios
    int num_ventas=0;
    Producto ventas[50];
    public:
    //constructor
    Usuario(string _codigo="",float _sueldo=0,string _nombre="",string _apellido="",string _dni="",string _direccion="",string _telefono="",int _edad=0):Persona(_nombre,_apellido,_dni,_direccion,_telefono,_edad){
        codigo=_codigo;
        correo=_nombre+"."+_apellido+"@unas.edu.pe";
        contraseña=_apellido;
        sueldo=_sueldo;
    }
    //funciones
    //mostrar ventas 
    Producto getVentas(int num_producto){
        return ventas[num_producto];
    }
    //colocar las ventas en un arreglo
    void setVentas(Producto _venta,int _cantidad){
        ventas[num_ventas]=_venta;
        ventas[num_ventas].setCantidad(_cantidad);
        num_ventas++;
    }
    //crear cuenta
    void Crear_Usuario(){
        system("cls");
        //pedir datos 
        cout << "escriba su nombre sin espacios : ";
        cin >> nombre;
        cout << "escriba su apellido sin espacios : ";
        cin >> apellido;
        cout << "escriba su dni sin espacios : ";
        cin >> dni;
        cout << "escriba su telefono sin espacios : ";
        cin >> telefono;
        cout << "escriba su direccion sin espacios : ";
        cin >> direccion;
        cout << "escriba el sueldo sin espacios : ";
        cin >> sueldo;
        cout << "escriba su codigo de la forma (letra + tres numeros + letra) ejemplo (F452E) : ";
        cin >> codigo;
        string mensaje;
        correo=nombre+"."+apellido+"@unas.edu.pe";
        contraseña=apellido;
        //dar a conocer el correo y la contraseña
        do{
            system("cls");
            mensaje="no";
            cout << "su correo es : " << correo << "\n";
            cout << "su contrasenia : " << contraseña << "\n";
            cout << "si desea continuar escriba si : ";
            cin >> mensaje;
        }while(!(mensaje=="si"));
    }
    //getter and setter de herencia
    string getNombre_U(){
        return nombre;
    }
    //fin
    //getter and setter basicos
    string getCodigo(){
        return codigo;
    }
    void setCodigo(string _codigo){
        codigo=_codigo;
    }
    string getCorreo(){
        return correo;
    }
    void setCorreo(string _correo){
        correo=_correo;
    }
    string getContraseña(){
        return contraseña;
    }
    void setContraseña(string _contraseña){
        contraseña=_contraseña;
    }
    float getSueldo(){
        return sueldo;
    }
    void setSueldo(float _sueldo){
        sueldo=_sueldo;
    }
};