//librerias
#include <iostream>
#include <string>
#include "servicio.cpp"

using namespace std;

//clase amiga empleado
class TrabajoMecanico{
    private:
    //atributos generales
    string calificacion_tm;
    Servicio servicio_realizado[20];
    public:
    //getter and setter
    Servicio getServicio(int num_servicio){
        return servicio_realizado[num_servicio];
    }
    void setServicio(Servicio _servicio_realizado, int num_servicio){
        servicio_realizado[num_servicio]=_servicio_realizado;
    }
    string getCalificacion(){
        return calificacion_tm;
    }
    void setCalificacion(string _calificacion){
        calificacion_tm=_calificacion;
    }
};