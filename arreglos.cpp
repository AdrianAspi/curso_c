#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int num[10];
//el usuario pone los numeros
    int tamaño= sizeof(num)/sizeof(num[0]);
    for(int i =0;i<tamaño;i++){
        cin>>num[i];
    }
//numeros aleatorios 
    /*srand(time(0));
    for(int i =0;i<tamaño;i++){
        num[i]=1+rand()%5;
        cout<<num[i]<<"\n";
    }
*/
//para el mayor
int mayor = num[0];
for(int i=1;i<tamaño;i++){
    if(num[i]>mayor){
        mayor = num[i];
    } 
}
cout<<"este es mayor "<<mayor<<"\n";
//para el menor
int menor= num[0];
for(int i=1;i<tamaño;i++){
    if(num[i]<menor){
        menor = num[i];
    } 
}
cout<<"este es menor "<<menor<<"\n";
//para el igual
int contar=1;
for(int i=0;i<tamaño;i++){
    contar=0;
    for(int y=0;y<tamaño;y++){ 
        if(num[i]==num[y]){
            contar=contar+1;
        } else {
            contar= contar;
        } 
    }
    if(contar ==1){ 
    cout<<num[i]<<" no se repite "<<endl;
    } else {
        cout<<num[i]<<" se repite "<<contar<<"veces"<<endl;
    }
}
    return 0;
}