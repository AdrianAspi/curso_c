#include<iostream>
#include<cstdlib>//libreria estandar de c
#include<ctime>//libreria para tomar el tiempo del reloj de la computadora

using namespace std;

void esperar(double t);
void dibujar(string mipantalla[81][35]);
int main() {
    char mv;//capta el movimiento que quiere que se haga
    string mipantalla[81][35];//dimension de la pantalla en formato cadena
    string comenzar;//se usa para saber si el usuario quiere comenzar a jugar
    string linea;//se usa cuando para escribir una linea del arreglo mipantalla
    float ch;//el control de altura se implemento por si logra aver un fallo con la variable atp
    float k;//se usa en el for para crear los "*" aleatorios
    float np;//se pone el numero de "*" que quieres que se escriba
    float wc;//es la win condition o condicion de victoria 
	int ptx;//se coloca el "*" en el eje x
	int pty;//se coloca el "*" en el eje y
	int atp;//es la altura del proyectil
	int x;//se usa en el bucle for para poner el x del arreglo mipantalla
	int y;//se usa en el bucle for para poner el y del arreglo mipantalla
	int n0,n1,n2,n3,n4;//se usa para colocar la nave en el eje x 
	int pry;//proyectil en el eje x
	//bucle infinito hasta que el usuario coloque 1
	do {
		cout << "instrucciones" << endl;
		cout << "para mover hacia la derecha presionar d" << endl;
		cout << "para mover hacia la izquierda presionar a" << endl;
		cout << "para disparar presionar w" << endl;
		cout << "presione 1 para comenzar" << endl;
		cin >> comenzar;
        system("cls");//limpiar pantalla
	} while (comenzar!="1");
	//se rrellena to el arreglo con espacio en blanco
	linea = " ";//inicializamos la variable linea
	for (x=1;x<=80;x++) {
		for (y=1;y<=34;y++) {
			mipantalla[x][y] = " ";
		}
	}
	//colocamos el lugar donde va inciar la nave
	mipantalla[39][34] = "o";
	mipantalla[40][34] = "o";
	mipantalla[41][34] = "o";
	//pones la posicion de la nave en su respectivo n0.....n4
	n0 = 38;
	n1 = 39;
	n2 = 40;
	n3 = 41;
	n4 = 42;
	pry = n2;//el pry es igual a n2 por que es el medio de la nave y es donde empieza el proyectil
	atp = 33;//la altura del proyectil es ua unidad menor que la nave
	np = 5;//cantidad de "*" = 5
	srand(time(0));//se da la cantidad de segundo a srand
	for (k=1;k<=np;k++) {
		ptx = (3+rand()%78);//el eje x del objetivo es uno seudoaleatorio en el rango de 3 a 80
		pty = (3+rand()%10);//el eje y del objetivo es uno seudoaleatorio en el rango de 3 a 12
		mipantalla[ptx][pty] = "*";
	}
	//se crea cadenas con la informacion dada y se esbre linea por linea 
	dibujar(mipantalla);
	//dentro de un do while se dicta que el bucle sera infinito si la condion de victoria es = a 1
	do {
		cin >> mv;//se pude al usuario escribir el movimiento que se ejucatara con la ayuda de un switch
		switch (mv) {
		case 'a'://moviemiento a la izquierda
		    wc = 1;//iinicializamos la condicion de victoria
			//para evitar errores se pone un if else que dicta si esta en el borde no se mueva mas de su posicion
			if (n0==1) {
				n0 = n0;
				n1 = n1;
				n2 = n2;
				n3 = n3;
				n4 = n4;
				mipantalla[n4][34] = " ";
			} else {//se le resta 1 a la posicion x para que la nave se mueva un caracter hacia la izquierda
				n0 = n0-1;
				n1 = n1-1;
				n2 = n2-1;
				n3 = n3-1;
				n4 = n4-1;
				mipantalla[n4][34] = " ";
			}
			//se coloca la nueva posiocion de la nave en el eje x
			mipantalla[n1][34] = "o";
			mipantalla[n2][34] = "o";
			mipantalla[n3][34] = "o";
            system("cls");//se limpia la pantalla
			//se dibuja la pantalla con los datos cambiados
			dibujar(mipantalla);
			break;
		case 'd':
		    wc = 1;//iinicializamos la condicion de victoria
			//para evitar errores se pone un if else que dicta si esta en el borde no se mueva mas de su posicion
			if (n4==80) {
				n0 = n0;
				n1 = n1;
				n2 = n2;
				n3 = n3;
				n4 = n4;
				mipantalla[n0][34] = " ";
			} else {//se le suma 1 a la posicion x para que la nave se mueva un caracter hacia la derecha
				n0 = n0+1;
				n1 = n1+1;
				n2 = n2+1;
				n3 = n3+1;
				n4 = n4+1;
				mipantalla[n0][34] = " ";
			}
			//se coloca la nueva posiocion de la nave en el eje x
			mipantalla[n1][34] = "o";
			mipantalla[n2][34] = "o";
			mipantalla[n3][34] = "o";
            system("cls");//se ñimpia la pantalla
			//se dibija la pantalla con los datos cambiados
			dibujar(mipantalla);
			break;
		case 'w'://moviemiento a la derecha
			wc = 2;//se da por entendido que si no cambia la condicion de victoria se acabara el juego
			pry = n2;//reiteramos que el pry sea donde este la nueva posicion de la nave en caso este haya cambiado
			ch = 33;//se coloca por precaucion es igual a la variable atp
			//se hace condiciones para que el proyectil choca un borde o si choca un objetivo o se el control de altura llega a 1
			do {
				ch = ch-1;
				mipantalla[pry][atp] = "|";//se pone el proyectil en la posicion x, y correspondiente
                system("cls");//se limpia la pantalla
				dibujar(mipantalla);
				esperar(100);//se crea una funcion para que tarde x milisegundos en seguir ejecutando
				mipantalla[pry][atp] = " ";//ala posicion actual del proyecil se deja en blanco
				atp = atp-1;//se coloca la nueva altura del proyectil
				mipantalla[pry][atp] = "|";//se asigna la nueva altura del proyectil
			} while (!(atp==1 || mipantalla[pry][atp]==" " || mipantalla[pry][atp-1]=="*" || ch==1));//el !()cambia el valor de la condicion
			//condiocion if cuando el proyectil no toco ningun objetivo
			if (atp==1) {
				mipantalla[pry][atp] = " ";
			} else {
				mipantalla[pry][atp-1] = " ";//se borra el rastro del proyectil
			}
			mipantalla[pry][atp] = " ";//se borra la posicion actual del proyectil
            system("cls");//se limpia la pantalla
			//se dibuja la pantalla con los datos actualizados
			dibujar(mipantalla);
			atp = 33;//se coloca el numero de la posicon del proyectil donde inicia
			//se crea un bucle que revise si hay algun objtivo ne el rango de y de 1 a 15 el rango de x 1 a 80
			for (y=1;y<=15;y++) {
				for (x=1;x<=80;x++) {
					//si cumple que encuatra algun objetivo la variable es igual a 1 por tanto seguira el bucle
					if (mipantalla[x][y]=="*") {
						wc = 1;
						break;
					}
				}
			}
			break;
		default:
			system("cls");//se limpia la pantalla
			//se dibuja la pantalla con los datos actualizados
			dibujar(mipantalla);
            break;
		}
	} while (wc==1);
    system("cls");//se limpia la pantalla solo sirve para sistemas operativos windows
	//se imprime un texto para saber que ganaste
	cout << "      w                 w    IIIIIIIIIIIIII     NN          N  " << endl;
	cout << "       w               w           II           N  N        N  " << endl;
	cout << "        w             w            II           N    N      N  " << endl;
	cout << "         w     w     w             II           N      N    N  " << endl;
	cout << "          w  w   w  w              II           N        N  N  " << endl;
	cout << "           w       w         IIIIIIIIIIIIII     N          NN  " << endl;
	return 0;
}
void dibujar(string mipantalla[81][35]){
	string linea="";
	for (int y=1;y<=34;y++) {
				linea = "";
				for (int x=1;x<=80;x++) {
					linea = linea+mipantalla[x][y];
				}
				cout << linea << endl;
			}
}
void esperar(double t) {
	clock_t t0 = clock();//timepo actual del reloj de la computadora
	double e = 0;//inicializacoms
	do {
		e = 1000*double(clock()-t0)/CLOCKS_PER_SEC;
	} while (e<t);//sera un bucle hasta que la opercion dentro sea igual a t
}