#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i;
    int num;
    int *p;
    bool es_primo=true;
    cout<<"Ingrese un numero entero: ";
    cin>>num;
    for(i=2;i<= sqrt(num);i++){
        if(num%i==0){
            es_primo=false;
            break;
        }
    }
    if(es_primo){
        cout<<num<<" es primo"<<endl;
    } else {
        cout<<num<<" no es primo"<<endl;
    }
    p=&num;
    cout<<p;
    return 0;
}