//librerias
#include <iostream>
#include <string>
#include "usuario.cpp"

using namespace std;

//declaracion de funciones
void Prod_iniciales(Producto productos[50]);
void Users_iniciales(Usuario users[20]);
void interfaz_principal();
void interfaz_vender(Usuario users[20],int num_usuario);
void interfaz_inventario();
void vender(Usuario users[20],int num_usuario,Producto productos[50],int num_producto);
void opcion_venta(Usuario users[20],int num_usuario,Producto productos[50],int num_producto);
string NewCodigo(int New_codigo);
void opcion_inventario(int new_codigo,Producto productos[50],int productos_iniciales);
//fin
//inicializar productos
void Prod_iniciales(Producto productos[50]){
    productos[0].setDatos("tijeras","00",2.5,24);
    productos[1].setDatos("cuaderno","01",5.5,24);
    productos[2].setDatos("cartuchera","02",4,24);
    productos[3].setDatos("mochila","03",35,24);
    productos[4].setDatos("lapicero","04",0.5,24);
    productos[5].setDatos("cartulina","05",3,24);
    productos[6].setDatos("folder","06",2,24);
    productos[7].setDatos("borrador","07",1,24);
    productos[8].setDatos("tajador","08",0.5,24);
    productos[9].setDatos("papel","09",0.5,24);
}
//inicializar usuarios
void Users_iniciales(Usuario users[20]){
    Usuario user_1("b052E",1450,"pablo","escobar","76254895","Av. Alfonso","981678953",19);
    Usuario user_2("b486E",1250,"emilio","gaviria","75646365","Av. Caceres","922466479",19);
    Usuario user_3("b284E",1250,"pedro","infante","76234686","Av. San Martin","911421793",19);
    Usuario user_4("b105E",1350,"camilo","constantino","72695346","Av. Alfonso","993461692",19);
    users[0]=user_1;
    users[1]=user_2;
    users[2]=user_3;
    users[3]=user_4;
}
//interfazes con letras
void interfaz_principal(){
    system("cls");
    cout << "\t\t\t\t\t\t\t\t" << "_____________________________" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|                           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|           Inicio          |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|                           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       1 : iniciar sesion  |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       2 : crear cuenta    |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       3 : inventario      |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       0 : salir           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|___________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t\t\t" << "     Elija una opcion : ";
}
void interfaz_vender(Usuario users[20],int num_usuario){
    system("cls");
    cout << "\t\t\t\t\t\t\t\t" << "nombre: " << users[num_usuario].getNombre_U() << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "_____________________________" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|                           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|           venta           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|                           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       1 : productos       |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       2 : vender          |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       3 : mis ventas      |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       0 : atras           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|___________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t\t\t" << "     Elija una opcion : ";
}
void interfaz_inventario(){
    system("cls");
    cout << "\t\t\t\t\t\t\t\t" << "_____________________________" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|                           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|         Inventario        |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|                           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       1 : crear producto  |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       2 : productos       |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|       0 : salir           |" << "\n";
    cout << "\t\t\t\t\t\t\t\t" << "|___________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t\t\t" << "     Elija una opcion : ";
}
//fin
//vender algun producto
void vender(Usuario users[20],int num_usuario,Producto productos[50],int num_producto){
    string _codigo_pro;
    string mensaje="no";
    int _cantidad;
    do{
        //buscar el producto por codigo
        do{
            system("cls");
            cout << "escriba el codigo el producto a vender : ";
            cin >> _codigo_pro;
            for(int i=0;i<50;i++){
                if(productos[i].getCodigo()==_codigo_pro){
                    num_producto=i;
                }
            }
            if(productos[num_producto].getCodigo()==""){
                cout << "no exites ese codigo, escriba cualquier letra para continuar\n";
                cin >> _codigo_pro;
            }
        }while(productos[num_producto].getCodigo()=="");
        // fin buscar producto
        //mostrar producto y su cantidad a comprar
        cout << productos[num_producto].getDatos() << "\ncantidad a comprar\n";
        cin >> _cantidad;
        productos[num_producto].setTotal_pagar(_cantidad);
        //confirmar venta
        cout << productos[num_producto].getDatos_Venta() << "\nescribir si para confirmar venta : ";
        cin >> mensaje;
        //evaluar el mensaje 
        if(mensaje=="si"){
            productos[num_producto].setCantidad(productos[num_producto].getCantidad()-_cantidad);
            users[num_usuario].setVentas(productos[num_producto],_cantidad);
            cout << "venta completada con exito\n";
            cout << "si desea vender otro producto escribir si : ";
            cin >> mensaje;
        }else{
            cout << "se cancelo la venta si desea vender otro producto escribir si : ";
            cin >> mensaje;
        }
    }while(mensaje=="si");
}
//opcion para vender productos
void opcion_venta(Usuario users[20],int num_usuario,Producto productos[50],int num_producto){
    //iniciar sesion
    string _correo="";
    string _contraseña;
    //averiguar correo
    do{
        system("cls");
        cout << "ingrese su correo : ";
        cin >> _correo;
        for(int i = 0; i < 20; i++){
            if(users[i].getCorreo()==_correo){
                num_usuario=i;
            }
        }
        if(users[num_usuario].getCorreo()==""){
            cout << "no existe ese correo vuelve a intentarlo\n";
        }
    }while(!(users[num_usuario].getCorreo()==_correo));
    //averiguar contrasaeña
    do{
        system("cls");
        cout << "ingrese su contrasenia : ";
        cin >> _contraseña;
        if(!(users[num_usuario].getContraseña()==_contraseña)){
            cout << "contrasenia incorrecta vuelve a intentarlo\n";
        }
    }while(!(users[num_usuario].getContraseña()==_contraseña));
    //fin
    //mover
    int opcion;
    do{
        interfaz_vender(users,num_usuario);;
        cin >> opcion;
        switch(opcion){
            case 1://mostrar productos
            system("cls");
            for(int i=0;i<50;i++){
                if(!(productos[i].getCodigo()=="")){
                    cout << productos[i].getDatos() << "\n";
                }
            }
            cout << "para volver escriba un numero\n";
            cin >> opcion;
            opcion=4;
            break;
            case 2://vender algun producto
            vender(users,num_usuario,productos,num_producto);
            cout << "para volver escriba un numero\n";
            cin >> opcion;
            opcion=4;
            break;
            case 3://mostrar ventas e un usuario
            system("cls");
            for(int i=0;i<50;i++){
                if(!(users[num_usuario].getVentas(i).getCodigo()=="")){
                    cout << users[num_usuario].getVentas(i).getDatos_Venta() << "\n";
                }
            }
            cout << "para volver escriba un numero\n";
            cin >> opcion;
            opcion=4;
            break;
            case 0:
            break;
            default:
            opcion=4;
            break;
        }
    }while(opcion==4);
}
//crear codigo para productos
string NewCodigo(int New_codigo){
    string codigo_nuevo="";
    codigo_nuevo=to_string(New_codigo);
    New_codigo++;
    return codigo_nuevo;
}
//opcion del inventario
void opcion_inventario(int new_codigo,Producto productos[50],int productos_iniciales){
    int opcion;
    interfaz_inventario();
    do{
        switch(opcion){
            case 1://crear productos
            productos[productos_iniciales].crear_producto(NewCodigo(new_codigo));
            productos_iniciales++;
            cout << "para volver escriba un numero\n";
            cin >> opcion;    
            opcion=4;
            break;
            case 2://mostrar productos
            system("cls");
            for(int i=0;i<50;i++){
                if(!(productos[i].getCodigo()=="")){
                    cout << productos[i].getDatos() << "\n";
                }
            }
            cout << "para volver escriba un numero\n";
            cin >> opcion;    
            opcion=4;
            break;
            case 0:
            break;
            default:
            opcion=4;
            break;
        }
    }while(opcion==4);
    
}
int main(){
    //producto 
    int NewCodigo=10;
    int productos_iniciales=10;
    int num_producto=0;
    Producto productos[50];
    Prod_iniciales(productos);
    //fin
    //Usuario
    int num_crear_usuario=4;
    int num_usuario=0;
    Usuario users[20];
    Users_iniciales(users);
    //fin
    //mover
    int opcion;
    do{
        interfaz_principal();
        cin >> opcion;
        switch(opcion){
            case 1:
            //ingresar_cuenta(users,num_usuario);
            opcion_venta(users,num_usuario,productos,num_producto);
            num_usuario=0;
            opcion=4;
            break;
            case 2:
            users[num_crear_usuario].Crear_Usuario();
            num_crear_usuario++;
            opcion=4;
            break;
            case 3:
            opcion_inventario(NewCodigo,productos,productos_iniciales);
            opcion=4;
            break;
            case 0:
            break;
            default:
            opcion=4;
            break;
        }
    }while(opcion==4);
    //fin
    return 0;
}