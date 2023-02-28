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
    cout<<res;
    return 0;
}