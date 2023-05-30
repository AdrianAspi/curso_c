//librerias
#include <iostream>
#include <string>

using namespace std;
//clase
class Motocicleta {
    private:
    string codigo_m;
    string marca_m;
    string modelo;
    string color;
    int anio;
    int precio;
    int cantidad_m;
    string fechas_resgistro;
    bool escondido_m;
    public:
    // Constructor
    Motocicleta(string _fecha_registro="", string _marca_m="", string _codigo="", string _color="", string _modelo="", int _anio=0, int _precio=0, int _cantidad_m=0) {
        marca_m = _marca_m;
        color = _color;
        modelo = _modelo;
        anio = _anio;
        precio = _precio;
        codigo_m = _codigo;
        cantidad_m = _cantidad_m;
        fechas_resgistro=_fecha_registro;
    }
    string report_compra(){  
        return "modelo : [ " + modelo + " ]-----cantida : [ " + to_string(cantidad_m) + " ]-----fecha de registro : [ " + fechas_resgistro + " ]-----cantida : [ motocicleta ]";
    }
    string stock_moto(){
        return "cantida : [ " + to_string(cantidad_m) + " ]-----cantida : [ " + to_string(cantidad_m) + " ]-----fecha de registro : [ " + fechas_resgistro + " ]-----cantida : [ motocicleta ]";
    }
    void crear_moto(){
        system("cls");
        cout << "escriba la marca : ";
        cin >> marca_m;
        cout << "escriba el color : ";
        cin >> color;
        cout << "escriba el modelo : ";
        cin >> modelo;
        cout << "escriba el codigo : ";
        cin >> codigo_m;
        cout << "escriba el anio : ";
        cin >> anio;
        cout << "escriba la cantidad : ";
        cin >> cantidad_m;
        cout << "escriba el precio : ";
        cin >> precio;
        cout << "escriba la fecha de registro : ";
        cin >> fechas_resgistro;
    }
    string Datos_Venta_moto(){
        return "Código: " + codigo_m + ", Marca: " + marca_m + ", Modelo: " + modelo +", Color: " + color + ", Año: " + to_string(anio) +", Precio: " + to_string(precio) + ", Cantidad: " + to_string(cantidad_m);
    }
    //getter and setter
    string getCodigoM() {
        return codigo_m;
    }
    void setCodigoM(string _codigo) {
    codigo_m = _codigo;
    }
    string getMarca_m() {
        return marca_m;
    }
    void setMarca_m(string _marca) {
        marca_m = _marca;
    }
    string getModelo() {
        return modelo;
    }
    void setModelo(string _modelo) {
        modelo = _modelo;
    }
    int getAnio() {
        return anio;
    }
    void setAnio(int _anio) {
        anio = _anio;
    }
    int getPrecio() {
        return precio;
    }
    void setPrecio(int _precio) {
        precio = _precio;
    }
    int getCantidadM() {
        return cantidad_m;
    }
    void setCantidadM(int _cantidad) {
        cantidad_m = _cantidad;
    }
};