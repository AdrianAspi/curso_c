#include <iostream>
using namespace std;
int main(){
    string productos[5]={"arroz","aceite","caramelo","ajinomen","pan"};
    int precio[5];
    int tamaño= sizeof(productos)/sizeof(productos[0]);
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<"poner el precio al producto "<<productos[i]<<"\n";
        cin>>precio[i];
    }
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<productos[i]<<" = "<<precio[i];
    }
    return 0;
}