#include <iostream>
using namespace std;
int main(){
   string as;
   int n1;
   int n2;
   int op;
   int res;
   cout<<"digite el primer numero"<<endl;
   cin>> n1;
   cout<<"digite el segundo numero"<<endl;
   cin>> n2;
   cout<<"ponga el numero del operador matematico correspodiente(1:+ ; 2:- ; 3:* ; 4:/)"<<endl;
   cin>> op;
   switch (op){
      case 1:
         res=n1+n2; break;
      case 2:
         res=n1-n2; break;
      case 3:
         res=n1*n2; break;
      case 4:
         if (n2==0) {
            op=2211;
            as = "no se puede definir"; break; 
	      } else {
		      res=n1/n2; break;
	      }
		   break;
         res=n1/n2; break;
      default:
         op=2211;
         as = "no eligio un operador valido"; break;
   }
   if (op==2211){
      cout<<as<<endl;
   } else {
      cout<< "la respuesta es "<<res<<endl;
   }
   return 0;
 }