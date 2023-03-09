#include <iostream>
using namespace std;
int main(){
    int num;
    int res;
    int *p;
    cin>>num;
    res=num%2;
    if(res==1){
        cout<<num<<" es impar\n";
    } else {
        cout<<num<<"es par\n";
    }
    p=&num;
    cout<<p;
    return 0;
}