#include <iostream>
using namespace std;
int main(){
   //variables declaradas
   string error;
   int num_1,num_2;
   int operador;
   int respuesta;
   //dar instrucciones escribiendo en pantalla que tiene que hacer
   cout<<"digite el primer numero"<<endl;
   cin>> num_1;//inicializamos la variable num_1
   cout<<"digite el segundo numero"<<endl;
   cin>> num_2;//inicializamos la variable num_1
   cout<<"ponga el numero del operador matematico correspodiente(1:+ ; 2:- ; 3:* ; 4:/)"<<endl;
   cin>> operador;//inicializamos la variable operador
   switch (operador){//depende del operador que elegija se ara una operacion u otra 
      case 1:
         respuesta=num_1+num_2; break;
      case 2:
         respuesta=num_1-num_2; break;
      case 3:
         respuesta=num_1*num_2; break;
      case 4:
         /*es caso de legir la division tenemos que hacer una condicion que si el deneminador es igual 
         a cero no haga la operacion y vote un mensaje para saber el error si no cumple la condicion 
         que haga la operaciondada*/
         if (num_2==0) {
            /*al operador el ponemos un numero especifico que en este caso sera 2211 esto se vera mas 
            adelante y damos un mensaje al error */
            operador=2211;
            error = "no se puede definir ya que no se puede dividir entre cero"; break; 
	      } else {
		      respuesta=num_1/num_2; break;
	      }
		   break;
      default:
      //aca igual si no se leige un operador canbaimos el operador a 2211 y damos un mensaje a error
         operador=2211;
         error = "no eligio un operador valido"; break;
   }
   /*esta condicional revisa si el operador es igual a 2211 y si es verdad vote el mesaje que esta 
   dentro del error y si la condicion es flasa se mostrara la respuesta de la operacion*/
   if (operador==2211){
      cout<<error<<endl;
   } else {
      cout<< "la respuesta es "<<respuesta<<endl;
   }
   return 0;
 }