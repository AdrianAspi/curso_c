#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void esperar(double t);

int main() {
    char mv;
    string mipantalla[81][35];
    string comenzar;
    string linea;
    float ch;
    float k;
    float np;
    float wc;
	int ptx;
	int pty;
	int atp;
	int x;
	int y;
	int n0;
	int n1;
	int n2;
	int n3;
	int n4;
	int pry;
	do {
		cout << "instrucciones" << endl;
		cout << "para mover hacia la derecha presionar d" << endl;
		cout << "para mover hacia la izquierda presionar a" << endl;
		cout << "para disparar presionar w" << endl;
		cout << "presione 1 para comenzar" << endl;
		cin >> comenzar;
        system("cls");
	} while (comenzar!="1");
	np = 5;
	linea = " ";
	for (x=1;x<=80;x++) {
		for (y=1;y<=34;y++) {
			mipantalla[x][y] = " ";
		}
	}
	mipantalla[39][34] = "o";
	mipantalla[40][34] = "o";
	mipantalla[41][34] = "o";
	n0 = 38;
	n1 = 39;
	n2 = 40;
	n3 = 41;
	n4 = 42;
	pry = n2;
	atp = 33;
	    srand(time(0));
	for (k=1;k<=np;k++) {
		ptx = (3+rand()%78);
		pty = (3+rand()%10);
		mipantalla[ptx][pty] = "*";
	}
	for (y=1;y<=34;y++) {
		linea = "";
		for (x=1;x<=80;x++) {
			linea = linea+mipantalla[x][y];
		}
		cout << linea << endl;
	}
	do {
		cin >> mv;
		switch (mv) {
		case 'a':
			if (n0==1) {
				n0 = n0;
				n1 = n1;
				n2 = n2;
				n3 = n3;
				n4 = n4;
				mipantalla[n4][34] = " ";
			} else {
				n0 = n0-1;
				n1 = n1-1;
				n2 = n2-1;
				n3 = n3-1;
				n4 = n4-1;
				mipantalla[n4][34] = " ";
			}
			mipantalla[n1][34] = "o";
			mipantalla[n2][34] = "o";
			mipantalla[n3][34] = "o";
            system("cls");
			for (y=1;y<=34;y++) {
				linea = "";
				for (x=1;x<=80;x++) {
					linea = linea+mipantalla[x][y];
				}
				cout << linea << endl;
			}
			break;
		case 'd':
			if (n4==80) {
				n0 = n0;
				n1 = n1;
				n2 = n2;
				n3 = n3;
				n4 = n4;
				mipantalla[n0][34] = " ";
			} else {
				n0 = n0+1;
				n1 = n1+1;
				n2 = n2+1;
				n3 = n3+1;
				n4 = n4+1;
				mipantalla[n0][34] = " ";
			}
			mipantalla[n1][34] = "o";
			mipantalla[n2][34] = "o";
			mipantalla[n3][34] = "o";
            system("cls");
			for (y=1;y<=34;y++) {
				linea = "";
				for (x=1;x<=80;x++) {
					linea = linea+mipantalla[x][y];
				}
				cout << linea << endl;
			}
			break;
		case 'w':
			wc = 2;
			pry = n2;
			ch = 33;
			do {
				ch = ch-1;
				mipantalla[pry][atp] = "|";
                system("cls");
				for (y=1;y<=34;y++) {
					linea = "";
					for (x=1;x<=80;x++) {
						linea = linea+mipantalla[x][y];
					}
					cout << linea << endl;
				}
				esperar(100);
				mipantalla[pry][atp] = " ";
				atp = atp-1;
				mipantalla[pry][atp] = "|";
			} while (!(atp==1 || mipantalla[pry][atp]==" " || mipantalla[pry][atp-1]=="*" || ch==1));
			if (atp==1) {
				mipantalla[pry][atp] = " ";
			} else {
				mipantalla[pry][atp-1] = " ";
			}
			mipantalla[pry][atp] = " ";
            system("cls");
			for (y=1;y<=34;y++) {
				linea = "";
				for (x=1;x<=80;x++) {
					linea = linea+mipantalla[x][y];
				}
				cout << linea << endl;
			}
			atp = 33;
			for (y=1;y<=10;y++) {
				for (x=1;x<=78;x++) {
					if (mipantalla[x][y]=="*") {
						wc = 0;
					}
				}
			}
			break;
		default:
			system("cls");
			for (y=1;y<=34;y++) {
				linea = "";
				for (x=1;x<=80;x++) {
					linea = linea+mipantalla[x][y];
				}
				cout << linea << endl;
			}
            break;
		}
	} while (wc<=1);
    system("cls");
	cout << "      w                 w    IIIIIIIIIIIIII     NN          N  " << endl;
	cout << "       w               w           II           N  N        N  " << endl;
	cout << "        w             w            II           N    N      N  " << endl;
	cout << "         w     w     w             II           N      N    N  " << endl;
	cout << "          w  w   w  w              II           N        N  N  " << endl;
	cout << "           w       w         IIIIIIIIIIIIII     N          NN  " << endl;
	return 0;
}
void dibujar(string line, int x, int y, string mipantalla[80][34]){
	string line=" ";
	string mipantalla[81][35];
	for(x=1;x<=78;x++){
		for(y=1;y<=78;y++){
			line = line + mipantalla[x][y];
		}
		cout<<line<<endl;
	}

}

void esperar(double t) {
	clock_t t0 = clock();
	double e = 0;
	do {
		e = 1000*double(clock()-t0)/CLOCKS_PER_SEC;
	} while (e<t);
}