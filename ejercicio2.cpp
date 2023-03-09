#include <iostream>
using namespace std;
int main(){
    string libros[5];
    int tamaño= sizeof(libros)/sizeof(libros[0]);
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<"ingrese el producto["<<i<<"]";
        cin>>libros[i];
    }
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<"el producto["<<i<<"] = "<<libros[i];
    }
    return 0;
}