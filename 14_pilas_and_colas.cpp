#include <iostream>
#include <stack>
#include <queue>

using namespace std;


int main(){
    stack<int> mi_pila;
    queue<int> mi_cola;
    int num=0;
    for(int i=0;i<5;i++){
        num++;
        mi_pila.push(num);//introducir numero a pila
    }
    for(int i=0;i<5;i++){
        num++;
        mi_cola.push(num);//introducir numero a cola
    }
    for(int i=0;i<5;i++){
        cout<<"el valor de mi pila es : "<<mi_pila.top()<<"\n";
        mi_cola.push(mi_pila.top());//el valor actual de pila mover a cola
        mi_pila.pop();//borrar pila
    }
    for(int i=0;i<5;i++){
        cout<<"el valor de mi cola es : "<<mi_cola.front()<<"\n";
        mi_pila.push(mi_cola.front());//el valor actual de cola mover a pila
        mi_cola.pop();//borrar cola
    }
    for(int i=0;i<5;i++){
        cout<<"el valor de mi pila es : "<<mi_pila.top()<<"\n";//mostrar pila
        mi_pila.pop();//borrar pila
    }
    for(int i=0;i<5;i++){
        cout<<"el valor de mi cola es : "<<mi_cola.front()<<"\n";//mostrar cola
        mi_cola.pop();//borrar cola
    }
    return 0;
}