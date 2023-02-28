#include <iostream>
using namespace std;
double prom(double n1,double n2,double n3);
double prom(double n1,double n2,double n3){
    double prom=0;
    prom = (n1+n2+n3)/3;
    return prom;
}
int main(){
    double res;
    double n1,n2,n3;
    cout<<"ingrese sus notas "<<endl;
    cin>>n1>>n2>>n3;
    res=prom(n1,n2,n3);
    if (res>=10.5){
        cout<<"aprobaste"<<endl;
    } else {
        cout<<"desaprobaste"<<endl;
    }
    cout<<res;
    return 0;
}