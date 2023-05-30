//librerias
#include <iostream>
#include <string>

using namespace std;

class Producto{
    private:
    //atributos
    string nombre;
    string codigo;
    float precio;
    int cantidad;
    float total_pagar;
    public:
    //constructor
    Producto(string _nombre="",string _codigo="",float _precio=0,int _cantidad=0){
        nombre=_nombre;
        codigo=_codigo;
        precio=_precio;
        cantidad=_cantidad;
    }
    //funcion pricipales
    //mostrar caracteristicas de productos
    string getDatos(){
        return "[nombre : " + nombre + " ]    [codigo : " + codigo + " ]    [precio : " + to_string(precio) + " ]    [cantidad : " + to_string(cantidad) + " ]";
    }
    //settear productos
    void setDatos(string _nombre="",string _codigo="",float _precio=0,int _cantidad=0){
        nombre=_nombre;
        codigo=_codigo;
        precio=_precio;
        cantidad=_cantidad;
    }
    //datos para productos vendidos
    string getDatos_Venta(){
        return "[nombre : " + nombre + "]    [codigo : " + codigo + "]    [precio : " + to_string(precio) + " ]    [cantidad : " + to_string(cantidad) + " ]    [total a pagar : " + to_string(total_pagar) + " ]";
    }
    //cuanto van a pagar
    void setTotal_pagar(int _cantidad_venta){
        total_pagar=precio*_cantidad_venta;
    }
    //crear nuevos productos
    void crear_producto(string _codigo){
        system("cls");
        cout << "escriba el nombre del producto : ";
        cin >> nombre;
        cout << "escriba el precio del producto : ";
        cin >> precio;
        cout << "escriba la cantidad del producto : ";
        cin >> cantidad;
        codigo=_codigo;//el codigo del nuevo producto  esta en el main
    }
    //getter and setter
    string getNombre(){
        return nombre;
    }
    void setNombre(string _nombre){
        nombre=_nombre;
    }
    string getCodigo(){
        return codigo;
    }
    void setCodigo(string _codigo){
        codigo=_codigo;
    }
    float getPrecio(){
        return precio;
    }
    void setPrecio(float _precio){
        precio=_precio;
    }
    int getCantidad(){
        return cantidad;
    }
    void setCantidad(int _cantidad){
        cantidad=_cantidad;
    }
};