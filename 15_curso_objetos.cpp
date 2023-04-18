#include <iostream>
#include <string>
using namespace std;
class Curso{
    private:
    //atributos
    string nombre,codigo,profesor;
    float credito;
    float actitudinal;
    float parcial_1,parcial_2;
    float medio_curso,final_curso;
    public:
    //contructor
    Curso(string _nombre,string _codigo,string _profesor,float _credito,float _actitudinal,float _parcial_1,float _parcial_2,float _medio_curso,float _final_curso){
        nombre=_nombre;
        codigo=_codigo;
        profesor=_profesor;
        credito=_credito;
        actitudinal=_actitudinal;
        parcial_1=_parcial_1;
        parcial_2=_parcial_2;
        medio_curso=_medio_curso;
        final_curso=_final_curso;
    }
};
int main(){
    return 0;
}