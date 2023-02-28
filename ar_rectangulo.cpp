#include <iostream>
using namespace std;
int area(int a,int h);
int area(int a,int h){
    int area=0;
    area=a*h;
    return area;
}
int main (){
    int an;
    int ah;
    int res;
    cout<<"hallar el area de un rectangulo "<<endl;
    cout<<"ponga el ancho del rectangulo "<<endl;
    cin>>an;
    cout<<"ponga la altura del rectangulo "<<endl;
    cin>>ah;
    cout<<"la respuesta es "<<endl;
    res=area(an,ah);
    cout<<res;
    return 0;
}