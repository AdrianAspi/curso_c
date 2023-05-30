#include <iostream>
using namespace std;
//funcion para sumar
int suma_matriz(int columna,int fila,int matriz[5][5]){
    int suma_matriz = 0;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            suma_matriz=matriz[i][j]+suma_matriz;//la matriz suma los datos dentro de ella
        }
    }
    return suma_matriz;//retornamos la suma final
}
//funcion para mostar la matriz
void mostrar_matriz(int columna,int fila,int matriz[5][5]){
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            cout<<matriz[i][j]<<"\t";//dibujar la matriz fila por fila
        }
        cout<<"\n";//se da un salto de linea al dibujar la fila
    }
}
//funcion de sumar filas
void suma_filas(int fila,int columna,int matriz[5][5]){
    int suma_filas=0;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            suma_filas=matriz[i][j]+suma_filas;//se suma una fila y se almacena en una variable
        }
        cout<<"la suma de la fila ["<<i<<"] es: "<<suma_filas<<"\n";//se imprime la variable
        suma_filas=0;//se reinicia la variable
    }
}
//funcion de sumar columnas
void suma_columnas(int fila,int columna,int matriz[5][5]){
    int suma_columna=0;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            suma_columna=matriz[j][i]+suma_columna;//se suma la columna y se almacena en una variable
        }
        cout<<"la suma de la columna ["<<i<<"] es: "<<suma_columna<<"\n";//se imprime la variable
        suma_columna=0;//se reinicia las variables
    }
}
//funcion valos maximo
int valor_maximo(int fila,int columna,int matriz[5][5]){
    int valor_maximo=0;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            if(matriz[i][j]>valor_maximo){
                valor_maximo=matriz[i][j];//se obtiene el valos maximo
            }
        }
    }
    return valor_maximo;
}
//funcion valsr minimo
int valor_minimo(int fila,int columna,int matriz[5][5]){
    int valor_minimo=matriz[0][0];
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            if(matriz[i][j]<valor_minimo){
                valor_minimo=matriz[i][j];//se obtiene el valor minimo
            }
        }
    }
    return valor_minimo;
}
//funcion promedio matriz
int promedio_matriz(int fila,int columna,int matriz[5][5]){
    int promedio_matriz=0;
    int suma_matriz = 0;
    int tamaño;
    tamaño=columna*fila;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            suma_matriz=matriz[i][j]+suma_matriz;//sumar cada variable del arreglo
        }
    }
    promedio_matriz=suma_matriz/tamaño;//halla el promedio
    return promedio_matriz;
}
//funcion promedio filas 
void promedio_filas(int fila,int columna,int matriz[5][5]){
    int suma_filas=0;
    int tamaño_fila;
    tamaño_fila=columna;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            suma_filas=matriz[i][j]+suma_filas;//halll la suma de fila
        }
        cout<<"el promedio de la fila ["<<i<<"] es: "<<suma_filas/tamaño_fila<<"\n";//colocar el promedio
        suma_filas=0;
    }
}
//funcion promedio columnas
void promedio_columnas(int fila,int columna,int matriz[5][5]){
    int suma_columna=0;
    int tamaño_columna;
    tamaño_columna=fila;
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            suma_columna=matriz[j][i]+suma_columna;//sumar la columna
        }
        cout<<"el promedio de la columna ["<<i<<"] es: "<<suma_columna/tamaño_columna<<"\n";//colocar el promedio
        suma_columna=0;
    }
}
//funcion invertir matriz
void invertir_matriz(int fila,int columna,int matriz[5][5]){
    int invertir_matriz=0;
    //primera forma
    /*for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            cout<<matriz[j][i];
        }
    }*/
    //segunda forma
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            invertir_matriz=matriz[i][j];
            matriz[i][j]=matriz[j][i];
            matriz[j][i]=invertir_matriz;
        }
    }
}
int main(){
    int columnas=5,filas=5;
    int rellenar_matriz=0;
    int matriz[5][5];
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            rellenar_matriz++;
            matriz[i][j]=rellenar_matriz;
        }
    }
    //llamar a las funciones
    cout<<"la suma de los datos de la matriz es: "<<suma_matriz(columnas,filas,matriz)<<endl;
    mostrar_matriz(columnas,filas,matriz);
    suma_filas(columnas,filas,matriz);
    suma_columnas(columnas,filas,matriz);
    cout<<"el valor maximo es :"<<valor_maximo(columnas,filas,matriz)<<"\n";
    cout<<"el valor minimo es :"<<valor_minimo(columnas,filas,matriz)<<"\n";
    cout<<"el valor promedio es :"<<promedio_matriz(columnas,filas,matriz)<<"\n";
    promedio_filas(columnas,filas,matriz);
    promedio_columnas(columnas,filas,matriz);
    invertir_matriz(columnas,filas,matriz);
    mostrar_matriz(columnas,filas,matriz);
    return 0;
}