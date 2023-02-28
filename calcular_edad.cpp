#include <iostream>
using namespace std;
int edad(int year);
int edad(int year){
    int edad=0;
    edad=2023-year;
    return edad;
}
int main (){
    int año;
    int res;
    cout<<"hallar tu edad con tu año de naciemiento"<<endl;
    cout<<"coloque su año de nacimiento"<<endl;
    cin>>año;
    cout<<"tu edad es"<<endl;
    res=edad(año);
    if(res<=17){
        cout<<"eres menor de edad"<<endl;
    } else {
        cout<<"eres mayor de edad"<<endl;
    }
    cout<<"tu edad es: "<<res;
    return 0;
}