//librerias
#include <iostream>
#include <string>

using namespace std;
//clase
class Repuesto{
    private:
    string nombre_r;
    string marca_r;
    string codigo_r;
    bool escondido_r;
    int precio_r;
    int cantidad_r;
    string fecha_registro_repuesto;
    public:
    Repuesto(string _fecha_registro_repuesto="",string _nombre_r="", string _marca_r="", string _codigo_r="", int _precio_r=0, int _cantidad_r=0){
        nombre_r=_nombre_r;
        marca_r=_marca_r;
        codigo_r=_codigo_r;
        precio_r=_precio_r;
        cantidad_r=_cantidad_r;
        fecha_registro_repuesto=_fecha_registro_repuesto;
    }
    string stock_repuesto(){
        return "cantida : [ " + to_string(cantidad_r) + " ]-----fecha de registro : [ " + fecha_registro_repuesto + " ]-----categoria : [ motocicleta ]";
    }
    void crear_repuesto(){
        system("cls");
        cout << "escribir el nombre : ";
        cin >> nombre_r;
        cout << "escribir la marca : ";
        cin >> marca_r;
        cout << "escribir el codigo : ";
        cin >> codigo_r;
        cout << "escribir el precio : ";
        cin >> precio_r;
        cout << "escribir la cantidad : ";
        cin >> cantidad_r;
        cout << "escribir la fecha de registro : ";
        cin >> fecha_registro_repuesto;
    }
    string datos_venta_repuesta(){
        return "Nombre: " + nombre_r + ", Marca: " + marca_r + ", Código: " + codigo_r +", Precio: " + to_string(precio_r) + ", Cantidad: " + to_string(cantidad_r);
    }
    //getter and setter
    string getNombreR() {
        return nombre_r;
    }
    void setNombreR(string _nombre) {
        nombre_r = _nombre;
    }
    string getMarca_r() {
        return marca_r;
    }
    void setMarca_r(string _marca) {
        marca_r = _marca;
    }
    string getCodigoR() {
        return codigo_r;
    }
    void setCodigoR(string _codigo) {
    codigo_r = _codigo;
    }
    int getPrecioR() {
        return precio_r;
    }
    void setPrecioR(int _precio) {
        precio_r = _precio;
    }
    int getCantidadR() {
        return cantidad_r;
    }
    void setCantidadR(int _cantidad) {
        cantidad_r = _cantidad;
    }
};