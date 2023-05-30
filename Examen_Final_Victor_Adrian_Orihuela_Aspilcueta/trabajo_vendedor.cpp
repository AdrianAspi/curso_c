//librerias
#include <iostream>
#include <string>
#include "motocicleta.cpp"
#include "repuesto.cpp"

using namespace std;

//clase amiga empleado
class TrabajoVendedor{
    private:
    //atributos generales
    string calificacion_tv;
    Motocicleta ventas_motos[30];
    Repuesto venta_repuesto[30];
    public:
    //getter and setter generales
    string getCalificacionTV() {
    return calificacion_tv;
    }
    void setCalificacionTV(string _calificacion) {
        calificacion_tv = _calificacion;
    }
    Motocicleta getVentasMotos(int numero) {
        return ventas_motos[numero];
    }
    void setVentasMotos(Motocicleta _ventas,int numero) {
        ventas_motos[numero] = _ventas;
    }
    Repuesto getVentaRepuesto(int numero) {
        return venta_repuesto[numero];
    }
    void setVentaRepuesto(Repuesto _venta,int numero) {
        venta_repuesto[numero] = _venta;
    }
};