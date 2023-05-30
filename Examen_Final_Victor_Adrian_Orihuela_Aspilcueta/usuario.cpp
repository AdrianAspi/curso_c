//librerias
#include <iostream>
#include <string>
#include "persona.cpp"
#include "trabajo_mecanico.cpp"
#include "trabajo_vendedor.cpp"

using namespace std;

//clase herencia 01
class Empleados : public Persona{
    private:
    string correo;
    string password;
    string codigo;
    string ocupacion;
    int num_trabajo;
    TrabajoMecanico mecanico;
    TrabajoVendedor vendedor;
    public:
    Empleados(string _codigo="", int _num_trabajo=0, string _nombre="", string _apellido="", string _dni="", string _telefono="", string _sexo="", string _direccion="", int _edad=0):Persona(_nombre, _apellido, _dni, _telefono, _sexo, _direccion, _edad){
        codigo=_codigo;
        num_trabajo=_num_trabajo;
        correo = nombre+"."+apellido+"@gmail.com";
        password = apellido;
        if(num_trabajo==1){
            ocupacion="mecanico";
        }else{
            num_trabajo=0;
            ocupacion="vendedor";
        }
    }
    void rellenar_datos(string _codigo, int _num_trabajo, string _nombre, string _apellido, string _dni, string _telefono, string _sexo, string _direccion, int _edad){
        nombre=_nombre;
        apellido=_apellido;
        dni=_dni;
        telefono=_telefono;
        sexo=_sexo;
        direccion=_direccion;
        edad=_edad;
        codigo=_codigo;
        num_trabajo=_num_trabajo;
        correo = nombre+"."+apellido+"@gmail.com";
        password = apellido;
        if(num_trabajo==1){
            ocupacion="mecanico";
        }else{
            num_trabajo=0;
            ocupacion="vendedor";
        }
    }
    string Datos_servicios(){
        return "nombre : "+nombre+", tiempo servicio : "+ mecanico.getServicio(0).getCadenaTiempo_servicio(0);
    }
    void Crear_Cuenta_Empleado(){
        cout << "escribe su nombre : ";
        cin >> nombre;
        cout << "escribe su apellido : ";
        cin >> apellido;
        cout << "escribe su dni : ";
        cin >> dni;
        cout << "escribe su telefono : ";
        cin >> telefono;
        cout << "escribe su sexo : ";
        cin >> sexo;
        cout << "escribe su direccion : ";
        cin >> direccion;
        cout << "escribe su edad : ";
        cin >> edad;
        cout << "escribe el codigo : ";
        cin >> codigo;
        cout << "escribe 1 para mecanico y 0 para vendedor, si no esta en el rango se colocara vendedor : ";
        cin >> num_trabajo;
        if(num_trabajo==1){
            ocupacion="mecanico";
        }else{
            num_trabajo=0;
            ocupacion="vendedor";
        }
        system("cls");
        string continuar;
        correo=nombre+"."+apellido+"@gmail.com";
        password=apellido;
        cout << "su correo es : " << correo << "\n";
        cout << "su contrasenia es : " << password << "\n";
        cout << "si desea continiar presione cualquier tecla y enter :";
        cin >> continuar;
    }
    //getter and setter
    TrabajoVendedor getVendedor(){
        return vendedor;
    }
    void setVendedor(TrabajoVendedor _vendedor){
        vendedor=_vendedor;
    }
    TrabajoMecanico getMecanico(){
        return mecanico;
    }
    void setMecanico(TrabajoMecanico _mecanico){
        mecanico=_mecanico;
    }
    string getOcupacion(){
        return ocupacion;
    }
    void setOcupacion(string _ocupacion){
        ocupacion=_ocupacion;
    }
    string getCorreo() {
        return correo;
    }
    void setCorreo(string _correo) {
        correo = _correo;
    }
    string getPassword() {
        return password;
    }
    void setPassword(string _password) {
        password = _password;
    }
    string getCodigo() {
        return codigo;
    }
    void setCodigo(string _codigo) {
        codigo = _codigo;
    }
    int getNumTrabajo() {
        return num_trabajo;
    }
    void setNumTrabajo(int _num) {
        num_trabajo = _num;
    }
};
//clase herencia 02
class Cliente : public Persona{
    private:
    string codigo_cliente;
    Motocicleta compra_motos[20];
    Repuesto compra_repuesto[20];
    Servicio servicio_prestado[20];
    public:
    Cliente(string _codigo_cliente="",string _nombre="", string _apellido="", string _dni="", string _telefono="", string _sexo="", string _direccion="", int _edad=0):Persona(_nombre, _apellido, _dni, _telefono, _sexo, _direccion, _edad){
        codigo_cliente=_codigo_cliente;
    }
    void rellenar_clientes(string _codigo_cliente="",string _nombre="", string _apellido="", string _dni="", string _telefono="", string _sexo="", string _direccion="", int _edad=0){
        nombre=_nombre;
        apellido=_apellido;
        dni=_dni;
        telefono=_telefono;
        sexo=_sexo;
        direccion=_direccion;
        edad=_edad;
        codigo_cliente=_codigo_cliente;
    }
    string Datos_Cliente(){
        return "nombre: " + nombre + ", apellido: " + apellido + ", codigo: " + codigo_cliente + ", dni: " + dni + ", teléfono: " + telefono + ", sexo: " + sexo + ", dirección: " + direccion + ", edad: " + to_string(edad);
    }
    void crear_cuenta(){
        cout << "escriba el apellido : ";
        cin >> apellido;
        cout << "escriba el codigo : ";
        cin >> codigo_cliente;
        cout << "escriba el dni : ";
        cin >> dni;
        cout << "escriba el telefono : ";
        cin >> telefono;
        cout << "escriba el sexo : ";
        cin >> sexo;
        cout << "escriba el direccion : ";
        cin >> direccion;
        cout << "escriba el edad : ";
        cin >> edad;
    }
    //getter and setter 
    Servicio getServicioPrestado(int num_servicio) {
        return servicio_prestado[num_servicio];
    }
    void setServicioPrestado(Servicio servicio, int num_servicio) {
        servicio_prestado[num_servicio] = servicio;
    }
    string getCodigoCliente() {
        return codigo_cliente;
    }
    void setCodigoCliente(string _codigo) {
        codigo_cliente = _codigo;
    }
    Motocicleta getCompraMotos(int num_compra) {
        return compra_motos[num_compra];
    }
    void setCompraMotos(Motocicleta _compra,int num_compra) {
        compra_motos[num_compra] = _compra;
    }
    Repuesto getCompraRepuesto(int num_compra) {
        return compra_repuesto[num_compra];
    }
    void setCompraRepuesto(Repuesto _compra,int num_compra) {
        compra_repuesto[num_compra] = _compra;
    }
};