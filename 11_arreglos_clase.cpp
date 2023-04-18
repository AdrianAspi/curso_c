/*23/03/2023*/
#include <iostream>
#include <cstdlib>
#include <ctime>//libreria para tomar el tiempo del reloj de la computadora
using namespace std;
int main(){
    //
    int num[10];
    //hallamos el tamaño de larreglo
    int tamaño= sizeof(num)/sizeof(num[0]);
    //el usuario pone los numeros
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
    //busca el numero mayor uno por uno
    for(int i=1;i<tamaño;i++){
        if(num[i]>mayor){
            mayor = num[i];
        } 
    }
    cout<<"este es mayor "<<mayor<<"\n";
    //para el menor
    int menor= num[0];
    //busca el numero menor uno por uno
    for(int i=1;i<tamaño;i++){
        if(num[i]<menor){
            menor = num[i];
        } 
    }
    cout<<"este es menor "<<menor<<"\n";
    //declaramos la variable contar para guardar la cantidad que se repite un numero
    int contar;
    //para saber cuantas veces se repite un numero
    for(int i=0;i<tamaño;i++){
        //inciamos en cero porque se va a a sumar uno cuando se cuente a asi misma
        contar=0;
        for(int y=0;y<tamaño;y++){ 
            //si encuentra un numero que se repita suma uno a la variable contar
            if(num[i]==num[y]){
                contar=contar+1;
            } else {
                contar=contar;
            } 
        }
        //usamos la condicional si es igual a uno es que solo se repitio una vez entonces no hay mas 
        if(contar ==1){ 
            cout<<num[i]<<" no se repite "<<endl;
        } else {
            cout<<num[i]<<" se repite "<<contar<<"veces"<<endl;
        }
    }
    return 0;
}