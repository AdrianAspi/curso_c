#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    //declaramos la variable fecha
    int fecha;
    //escribimos instrucciones 
    cout<<"ponga el numero de mes \n";
    cin>>fecha;
    cout<<"estamos en el mes de \n";
    //utilizamos switch para que segun el numero de mes nos de una cadena u otra 
    switch(fecha){
        case 1:
        cout<<"enero\n";
        break;
        case 2:
        cout<<"febrero\n";
        break;
        case 3:
        cout<<"marzo\n";
        break;
        case 4:
        cout<<"abril\n";
        break;
        case 5:
        cout<<"mayo\n";
        break;
        case 6:
        cout<<"junio\n";
        break;
        case 7:
        cout<<"julio\n";
        break;
        case 8:
        cout<<"agosto\n";
        break;
        case 9:
        cout<<"setiembre\n";
        break;
        case 10:
        cout<<"octubre\n";
        break;
        case 11:
        cout<<"noviembre\n";
        break;
        case 12:
        cout<<"diciembre\n";
        break;
        default:
        cout<<"no puso un valor del uno al 12 o puso una letra\n";
        break;

    }
    return 0;
}