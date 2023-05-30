//librerias
#include <iostream>
#include <string>

using namespace std;
//clase
class Servicio{
    private:
    string nombre_s;
    string descripcion_servicio;
    string codigo_servicio;
    int precio_servicio;
    int cantida_realizadas=0;
    //tiempo
    string cadena_tiempo[50];
    int num_cadena_tiempo=0;
    int tiempo[2];
    public:
    Servicio(string _nombre_s="", string _codigo_servicio="", string _descripcion_servicio="", int _precio_servicio=0){
        nombre_s=_nombre_s;
        codigo_servicio=_codigo_servicio;
        descripcion_servicio=_descripcion_servicio;
        precio_servicio=_precio_servicio;
    }
    //info de servicio
    string info_servicio(){
        return "nombre: " + nombre_s + ", código: " + codigo_servicio + ", descripción: " + descripcion_servicio + ", precio: " + to_string(precio_servicio);
    }
    //nuevo servicio
    void crear_servicio(){
        system("cls");
        cout << "digite el nombre del servicio : ";
        cin >> nombre_s;
        cout << "digite el codigo del servicio : ";
        cin >> codigo_servicio;
        cout << "digite la descripcion del servicio : ";
        cin >> descripcion_servicio;
        cout << "digite el precio del servicio : ";
        cin >> precio_servicio;
    }
    //funciones tiempo
    string getTiempo_Trabajo_servicio(){
        string mensaje_final;
        if(tiempo[0]==1){
            if(tiempo[1]==1){
                mensaje_final=to_string(tiempo[0])+" hora y "+to_string(tiempo[1])+" segundo";
            }else{
                mensaje_final=to_string(tiempo[0])+" hora y "+to_string(tiempo[1])+" segundos";
            }
        }else{
            if (tiempo[1]==1){
                mensaje_final=to_string(tiempo[0])+" horas y "+to_string(tiempo[1])+" segundo";
            }else{
                mensaje_final=to_string(tiempo[0])+" horas y "+to_string(tiempo[1])+" segundos";
            }
        }
        cadena_tiempo[num_cadena_tiempo]=mensaje_final;
        num_cadena_tiempo++;
        return mensaje_final;
    }
    void setPedir_Tiempo_servicio(){
        system("cls");
        cout << "digite las horas que tardo: ";
        cin >> tiempo[0];
        cout << "digite los segundos que tardo: ";
        cin >> tiempo[1];
        getTiempo_Trabajo_servicio();
    }

    //getter and setter
    string getCodigoServicio() {
        return codigo_servicio;
    }
    void setCodigoServicio(string _codigo) {
        codigo_servicio = _codigo;
    }
    string getNombre_servicio(){
        return nombre_s;
    }
    void setNombre_servicio(string _nombre) {
        nombre_s = _nombre;
    }
    string getDescripcion_servicio() {
        return descripcion_servicio;
    }
    void setDescripcion_servicio(string _descripcion) {
        descripcion_servicio = _descripcion;
    }
    int getPrecio_servicio() {
        return precio_servicio;
    }
    void setPrecio_servicio(int _precio) {
        precio_servicio = _precio;
    }
    int getCantidadRealizadas_servicio() {
        return cantida_realizadas;
    }
    void setCantidadRealizadas_servicio(int _cantidad) {
        cantida_realizadas = _cantidad;
    }
    //getter and setter tiempo
    string getCadenaTiempo_servicio(int _num_cadena_tiempo) {
        return cadena_tiempo[_num_cadena_tiempo];
    }
    void setCadenaTiempo_servicio(string _cadena,int _num_cadena_tiempo) {
        cadena_tiempo[_num_cadena_tiempo] = _cadena;
    }
    int getNumCadenaTiempo_servicio() {
        return num_cadena_tiempo;
    }
    void setNumCadenaTiempo_servicio(int _num) {
        num_cadena_tiempo = _num;
    }
    int getTiempo_servicio(int num_tiempo){
        return tiempo[num_tiempo];
    }
    void setTiempo_servicio(int _tiempo, int num_tiempo){
        tiempo[num_tiempo]=_tiempo;
    }

};