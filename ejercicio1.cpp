#include <iostream>
using namespace std;
int main(){
    string producto[5]={"televisor","monitor","celular","cargador","parlante"};
    producto[2]="computadora";
    int tamaño= sizeof(producto)/sizeof(producto[0]);
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<"el producto["<<i<<"] = "<<producto[i];
    }
    return 0;
}