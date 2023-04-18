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
        mi_pila.push(num);
    }
    for(int i=0;i<5;i++){
        num++;
        mi_cola.push(num);
    }
    for(int i=0;i<5;i++){
        cout<<"el valor de mi pila es : "<<mi_pila.top()<<"\n";
        mi_cola.push(mi_pila.top());
        mi_pila.pop();
    }
    for(int i=0;i<5;i++){
        cout<<"el valor de mi cola es : "<<mi_cola.front()<<"\n";
        mi_pila.push(mi_cola.front());
        mi_cola.pop();
    }
    for(int i=0;i<5;i++){
        cout<<"el valor de mi pila es : "<<mi_pila.top()<<"\n";
        mi_pila.pop();
    }
    for(int i=0;i<5;i++){
        cout<<"el valor de mi cola es : "<<mi_cola.front()<<"\n";
        mi_cola.pop();
    }
    return 0;
}