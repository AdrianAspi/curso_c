//librerias
#include <iostream>
#include <string>
#include <fstream>
#include "usuario.cpp"

using namespace std;

//inicializar productos
void Inicializador_Repuestos(Repuesto repuestos[50]){
    Repuesto repuesto1("04/05/2001","Espejo Retrovisor", "Rizoma", "B01", 80, 10);
    Repuesto repuesto2("03/06/2002","Llanta Trasera", "Pirelli", "B02", 200, 18);
    Repuesto repuesto3("02/07/2014","Llanta Delantera", "Pirelli", "B03", 180, 15);
    Repuesto repuesto4("01/08/2011","Filtro de Aceite", "Bosch", "B04", 15, 30);
    Repuesto repuesto5("05/09/2020","Pastillas de Freno", "EBC", "B05", 60, 24);
    Repuesto repuesto6("06/10/2013","Bujía", "NGK", "B06", 12, 8);
    Repuesto repuesto7("07/01/2017","Cadena de Transmisión", "RK", "B07", 50, 12);
    Repuesto repuesto8("08/02/2018","Amortiguador Trasero", "Ohlins", "B08", 300, 6);
    Repuesto repuesto9("09/03/2011","Escape", "Akrapovic", "B09", 500, 4);
    Repuesto repuesto10("10/04/2010","Amortiguador delantero", "Ohlins", "B10", 270, 6);
    repuestos[0]=repuesto1;
    repuestos[1]=repuesto2;
    repuestos[2]=repuesto3;
    repuestos[3]=repuesto4;
    repuestos[4]=repuesto5;
    repuestos[5]=repuesto6;
    repuestos[6]=repuesto7;
    repuestos[7]=repuesto8;
    repuestos[8]=repuesto9;
    repuestos[9]=repuesto10;
}
void Inicializador_Motocicleta(Motocicleta motocicletas[20]){
    Motocicleta moto1("04/05/2010","Honda", "12345", "Rojo", "CBR650R", 2021, 10000,10);
    Motocicleta moto2("15/03/2009","Kawasaki", "56789", "Verde", "Ninja 650", 2022, 9000,12);
    Motocicleta moto3("30/08/2012","Yamaha", "98765", "Azul", "YZF-R1", 2020, 15000,11);
    Motocicleta moto4("12/10/2015","Suzuki", "24680", "Negro", "GSX-R750", 2021, 11000,8);
    Motocicleta moto5("28/04/2013","Ducati", "13579", "Amarillo", "Panigale V4", 2022, 20000,9);
    motocicletas[0]=moto1;
    motocicletas[1]=moto2;
    motocicletas[2]=moto3;
    motocicletas[3]=moto4;
    motocicletas[4]=moto5;
}
void Inicializador_Empleados(Empleados empleado[15]){
    empleado[0].rellenar_datos("001", 0, "juan", "gomez", "12345678", "912345678", "Masculino", "Calle A", 30);
    empleado[1].rellenar_datos("002", 0, "Maria", "Lopez", "87654321", "987614321", "Femenino", "Avenida B", 25);
    empleado[2].rellenar_datos("003", 0, "Pedro", "Rodriguez", "56789012", "987659321", "Masculino", "Calle C", 35);
    empleado[3].rellenar_datos("004", 1, "Ana", "Perez", "10987654", "912464678", "Femenino", "Avenida D", 28);
    empleado[4].rellenar_datos("005", 1, "Carlos", "Garcia", "43210987", "989012345", "Masculino", "Calle E", 32);
}
void Inicializador_Cliente(Cliente clientes[30]){
    clientes[0].rellenar_clientes("006", "Laura", "Torres", "98765432", "954321098", "Femenino", "Avenida F", 27);
    clientes[1].rellenar_clientes("007", "Jose", "Sanchez", "34567890", "967890543", "Masculino", "Calle G", 33);
    clientes[2].rellenar_clientes("008", "Sofia", "Martinez", "09876543", "943210987", "Femenino", "Avenida H", 29);
    clientes[3].rellenar_clientes("009", "Andres", "Hernandez", "56789012", "921098765", "Masculino", "Calle I", 34);
    clientes[4].rellenar_clientes("010", "Carolina", "Gonzalez", "32109876", "976543210", "Femenino", "Avenida J", 31);
}
void Inicializador_Servicios(Servicio servicios[15]){
    Servicio servicio1("Cambio de aceite", "001", "Cambio de aceite y filtro de aceite", 50);
    Servicio servicio2("Alineación y balanceo", "002", "Alineación de las ruedas y balanceo de los neumáticos", 80);
    Servicio servicio3("Limpieza de inyectores", "003", "Limpieza y desobstrucción de los inyectores de combustible", 60);
    Servicio servicio4("Cambio de pastillas de freno", "004", "Cambio de las pastillas de freno delanteras y traseras", 120);
    Servicio servicio5("Revisión general", "005", "Revisión completa del vehículo y detección de posibles problemas", 100);
    servicios[0]=servicio1;
    servicios[1]=servicio2;
    servicios[2]=servicio3;
    servicios[3]=servicio4;
    servicios[4]=servicio5;
}
void simulacion_estatica(Cliente clientes[30],Servicio servicios[15],Empleados empleados[15],Repuesto repuestos[50],Motocicleta motocicleta[20]){
    int numero;
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            if(j<5){
                clientes[i].setCompraMotos(motocicleta[j],j);
                empleados[i].getVendedor().setVentasMotos(motocicleta[j],j);
            }else{
                numero=j-5;
                empleados[i].getVendedor().setVentaRepuesto(repuestos[j],numero);
                clientes[i].setCompraRepuesto(repuestos[j],numero);
            }
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            clientes[i].setServicioPrestado(servicios[j],j);
        }
    }
}
//interfazes
void interfaz_Bienbenida(){
    system("cls");
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|     BIENBENIDO A TIENDA MOTORIN     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|         1 : iniciar sesion          |" << "\n";
    cout << "\t\t\t\t\t\t" << "|         2 : crear cuenta            |" << "\n";
    cout << "\t\t\t\t\t\t" << "|         3 : reportes y salir        |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
void interfaz_Sesion_Iniciada_Vendedor(Empleados empleados[15], int identificador_empleado){
    system("cls");
    cout << "\t\t\t\t\t\t" << " Vendedor : " << empleados[identificador_empleado].getNombre() << "\n";
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           1 : vender                |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           2 : inventario            |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           3 : clientes              |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           4 : salir                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
void interfaz_Vender(){
    system("cls");
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|               VENDER                |" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           1 : motocicleta           |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           2 : repuesto              |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           3 : salir                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
void interfaz_Inventario(){
    system("cls");
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|              INVENTARIO             |" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           1 : motocicleta           |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           2 : repuesto              |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           3 : salir                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
void interfaz_Motocicleta(){
    system("cls");
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|             MOTOCICLETA             |" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           1 : mostrar               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           2 : agregar               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           3 : salir                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
void interfaz_Repuesto(){
    system("cls");
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|               REPUESTO              |" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           1 : mostrar               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           2 : agregar               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           3 : salir                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
void interfaz_Cliente_Venta(){
    system("cls");
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|               CLIENTE               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           1 : compras               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           2 : datos                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           3 : salir                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
void interfaz_Sesion_Iniciada_Mecanico(Empleados empleados[15], int identificador_empleado){
    system("cls");
    cout << "\t\t\t\t\t\t" << " Mecanico : " << empleados[identificador_empleado].getNombre() << "\n";
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           1 : realizar servicio     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           2 : servicio              |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           3 : clientes              |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           4 : salir                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
void interfaz_Servicio(){
    system("cls");
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|              SERVICIO               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           1 : mostrar               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           2 : agregar               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           3 : salir                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
void interfaz_Cliente_Mecanico(){
    system("cls");
    cout << "\t\t\t\t\t\t" << "_______________________________________" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|               CLIENTE               |" << "\n";
    cout << "\t\t\t\t\t\t" << "|                                     |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           1 : Servicios             |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           2 : datos                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|           3 : salir                 |" << "\n";
    cout << "\t\t\t\t\t\t" << "|_____________________________________|" << "\n\n";
    cout << "\t\t\t\t\t\t" << "         Elija una opcion : ";
}
//opciones de interfaz
//opciones para vendedor
void Opcion_vender(Empleados empleados[15],int identificador_empleado,Cliente clientes[30],Motocicleta motocicletas[20],Repuesto repuestos[50]){
    //variables moto
    string codigo_m;
    int num_moto=0;
    int cantidad_m=0;
    string continuar;
    //variables repuesto
    string codigo_r;
    int num_repu=0;
    int cantidad_r=0;
    //cliente
    int num_cliente=0;
    string nombre_cliente;
    int num_compra_moto;
    int num_compra_repuesto;
    //fin
    int opcion_V;
    do{
        interfaz_Vender();
        cin >> opcion_V;
        //cliente a vender
        system("cls");
        cout << "escribir el nombre del cliente : ";
        cin >> nombre_cliente;
        for(int i=0;i<30;i++){
            if(nombre_cliente==clientes[i].getNombre()){
                num_cliente=i;
            }
        }
        if(!(clientes[num_cliente].getNombre()==nombre_cliente)){
            int numero_c;
            while(numero_c < 30){
                if(clientes[numero_c].getNombre()==""){
                    num_cliente=numero_c;
                    numero_c=30;
                }
                numero_c++;
            }
            clientes[num_cliente].crear_cuenta();
        }
        switch(opcion_V){
            //motocicletas
            case 1:
            {
                int num_ventas_moto;
                system("cls");
                do{
                    cout << "escriba el codigo de la motocicleta : ";
                    cin >> codigo_m;
                    for(int i = 0; i < 20;i++){
                        if(codigo_m==motocicletas[i].getCodigoM()){
                            num_moto=i;
                        }
                    }
                    if(!(codigo_m==motocicletas[num_moto].getCodigoM())){
                        system("cls");
                        cout << "codigo incorrecto\n";
                    }
                }while(!(codigo_m==motocicletas[num_moto].getCodigoM()));
                system("cls");
                cout << "los datos de la moto a vender es la siguiente \n" << motocicletas[num_moto].Datos_Venta_moto();
                cout << "\n escoga la cantidad a vender :";
                cin >> cantidad_m;
                if(cantidad_m > motocicletas[num_moto].getCantidadM()){
                    cantidad_m = motocicletas[num_moto].getCantidadM();
                    cout << "solo se pueden vender " + motocicletas[num_moto].getCantidadM();
                }
                cout << "presione cualquier tecla y enter para continuar\n";
                motocicletas[num_moto].setCantidadM(motocicletas[num_moto].getCantidadM()-cantidad_m);
                cin >> continuar;
                int numero=0;
                while(numero < 30){
                    if(empleados[identificador_empleado].getVendedor().getVentasMotos(numero).getMarca_m()==""){
                        num_ventas_moto=numero;
                        numero=30;
                    }
                    numero++;
                }
                empleados[identificador_empleado].getVendedor().setVentasMotos(motocicletas[num_moto],num_ventas_moto);
                empleados[identificador_empleado].getVendedor().getVentasMotos(num_ventas_moto).setCantidadM(cantidad_m);
                int numero_cc=0;
                while(numero_cc < 20){
                    if(clientes[num_cliente].getCompraMotos(numero_cc).getMarca_m()==""){
                        num_compra_moto=numero_cc;
                        numero_cc=30;
                    }
                    numero_cc++;
                }
                clientes[num_cliente].setCompraMotos(motocicletas[num_moto],num_compra_moto);
                clientes[num_cliente].getCompraMotos(num_compra_moto).setCantidadM(cantidad_m);
                break;
            }
            //repuestos
            case 2:
            {
                int num_ventas_repuesto;
                do{
                    cout << "escriba el codigo del repuesto : ";
                    cin >> codigo_r;
                    for(int i = 0; i < 20;i++){
                        if(codigo_r==repuestos[i].getCodigoR()){
                            num_repu=i;
                        }
                    }
                    if(!(codigo_r==repuestos[num_repu].getCodigoR())){
                        system("cls");
                        cout << "codigo incorrecto\n";
                    }
                }while(!(codigo_r==repuestos[num_repu].getCodigoR()));
                system("cls");
                cout << "los datos del repuesto a vender es la siguiente \n" << repuestos[num_repu].datos_venta_repuesta();
                cout << "\n escoga la cantidad a vender :";
                cin >> cantidad_r;
                if(cantidad_r > repuestos[num_repu].getCantidadR()){
                    cantidad_r = repuestos[num_repu].getCantidadR();
                    cout << "solo se pueden vender " + repuestos[num_moto].getCantidadR() << "\n";
                }
                cout << "presione cualquier tecla y enter para continuar\n";
                repuestos[num_repu].setCantidadR(repuestos[num_repu].getCantidadR()-cantidad_r);
                cin >> continuar;
                int numero=0;
                while(numero < 30){
                    if(empleados[identificador_empleado].getVendedor().getVentaRepuesto(numero).getNombreR()==""){
                        num_ventas_repuesto=numero;
                        numero=30;
                    }
                    numero++;
                }
                empleados[identificador_empleado].getVendedor().setVentaRepuesto(repuestos[num_repu],num_ventas_repuesto);
                empleados[identificador_empleado].getVendedor().getVentaRepuesto(num_ventas_repuesto).setCantidadR(cantidad_r);
                int numero_cc=0;
                while(numero_cc < 20){
                    if(clientes[num_cliente].getCompraRepuesto(numero_cc).getNombreR()==""){
                        num_compra_repuesto=numero_cc;
                        numero_cc=30;
                    }
                    numero_cc++;
                }
                clientes[num_cliente].setCompraRepuesto(repuestos[num_repu],num_compra_repuesto);
                clientes[num_cliente].getCompraRepuesto(num_compra_repuesto).setCantidadR(cantidad_r);
                break;
            }
            case 3:
            {
                opcion_V=3;
            }
            break;
            default:
            {
                opcion_V=4;
            }
            break;
        }
    }while(!(opcion_V==3));
}
void Opcion_Motocicleta(Motocicleta motocicletas[20]){
    int opcion_M;
    string continuar;
    do{
        interfaz_Motocicleta();
        cin >> opcion_M;
        switch(opcion_M){
            case 1:
            {
                system("cls");
                for(int i=0;i<20;i++){
                    if(!(motocicletas[i].getMarca_m()=="")){
                        cout << motocicletas[i].Datos_Venta_moto() << "\n";
                    }
                }
                cout << "escriba una letra y presione enter para continuar : ";
                cin >> continuar;
                break;
            }
            case 2:
            {
                int num_agregar_moto;
                for(int j=0;j<20;j++){
                    if(motocicletas[j].getMarca_m()==""){
                        num_agregar_moto=j;
                        j=20;
                    }
                }
                motocicletas[num_agregar_moto].crear_moto();
                break;
            }
            break;
            case 3:
            break;
            default:
            opcion_M=4;
            break;
        }
    }while(!(opcion_M==3));
}
void Opcion_Repuesto(Repuesto repuestos[50]){
    int opcion_R;
    string continuar;
    do{
        interfaz_Repuesto();
        cin >> opcion_R;
        switch(opcion_R){
            case 1:
            {
                system("cls");
                for(int i=0;i<20;i++){
                    if(!(repuestos[i].getMarca_r()=="")){
                        cout << repuestos[i].datos_venta_repuesta() << "\n";
                    }
                }
                cout << "escriba una letra y presione enter para continuar : ";
                cin >> continuar;
                break;
            }
            case 2:
            {
                int num_agregar_repuesto;
                for(int j=0;j<20;j++){
                    if(repuestos[j].getMarca_r()==""){
                        num_agregar_repuesto=j;
                        j=20;
                    }
                }
                repuestos[num_agregar_repuesto].crear_repuesto();
                break;
            }
            break;
            case 3:
            break;
            default:
            opcion_R=4;
            break;
        }
    }while(!(opcion_R==3));
}
void Opcion_Inventario(Motocicleta motocicletas[20],Repuesto repuestos[50]){
    int opcion_I;
    do{
        interfaz_Inventario();
        cin >> opcion_I;
        switch(opcion_I){
            case 1:
            Opcion_Motocicleta(motocicletas);
            break;
            case 2:
            Opcion_Repuesto(repuestos);
            break;
            case 3:
            break;
            default:
            opcion_I=5;
            break;
        }
    }while(!(opcion_I==4));
}
void Opcion_Cliente_venta(Cliente clientes[30]){
    int opcion_CV;
    //variable de cliente
    string nombre_cliente;
    int num_cliente;
    do{
        interfaz_Cliente_Venta();
        cin >> opcion_CV;
        //encontrar cliente
        system("cls");
        cout << "escribir el nombre del cliente : ";
        cin >> nombre_cliente;
        for(int i=0;i<30;i++){
            if(nombre_cliente==clientes[i].getNombre()){
                num_cliente=i;
            }
        }
        if(!(clientes[num_cliente].getNombre()==nombre_cliente)){
            int numero_c;
            while(numero_c < 30){
                if(clientes[numero_c].getNombre()==""){
                    num_cliente=numero_c;
                    numero_c=30;
                }
                numero_c++;
            }
            clientes[num_cliente].crear_cuenta();
        }
        switch(opcion_CV){
            case 1:
            cout << "----------------------------MOTOS------------------------------\n";
            for(int i=0;i<20;i++){
                if(!(clientes[num_cliente].getCompraMotos(i).getMarca_m()=="")){
                    cout << clientes[num_cliente].getCompraMotos(i).Datos_Venta_moto() << "\n";
                }
            }
            cout << "--------------------------REPUESTOS------------------------------\n";
            for(int i=0;i<20;i++){
                if(!(clientes[num_cliente].getCompraRepuesto(i).getNombreR()=="")){
                    cout << clientes[num_cliente].getCompraRepuesto(i).datos_venta_repuesta() << "\n";
                }
            }
            break;
            case 2:
            clientes[num_cliente].Datos_Cliente();
            break;
            case 3:
            break;
            default:
            opcion_CV=4;
            break;
        }
    }while(!(opcion_CV==3));
}
void Opcion_Sesion_Vendedor(Empleados empleados[15],int identificador_empleado,Cliente clientes[30],Motocicleta motocicletas[20],Repuesto repuestos[50]){
    int opcion_SIV;
    do{
        interfaz_Sesion_Iniciada_Vendedor(empleados,identificador_empleado);
        cin >> opcion_SIV;
        switch(opcion_SIV){
            case 1:
            Opcion_vender(empleados,identificador_empleado,clientes,motocicletas,repuestos);
            break;
            case 2:
            Opcion_Inventario(motocicletas,repuestos);
            break;
            case 3:
            Opcion_Cliente_venta(clientes);
            break;
            case 4:
            break;
            default:
            opcion_SIV=5;
            break;
        }
    }while(!(opcion_SIV==4));
}
//opciones para mecanico
void Opcion_Prestar_Servicio(Empleados empleados[15],int identificador_empleado,Cliente clientes[30],Servicio servicios[15]){
    string continuar;
    //varialbe de servicios
    string codigo_s;
    int num_servicio;
    //variable cliente
    string nombre_cliente;
    int num_cliente;
    //cliente a prestar servicio
    system("cls");
    cout << "escribir el nombre del cliente : ";
    cin >> nombre_cliente;
    for(int i=0;i<30;i++){
        if(nombre_cliente==clientes[i].getNombre()){
            num_cliente=i;
        }
    }
    if(!(clientes[num_cliente].getNombre()==nombre_cliente)){
        int numero_c;
        while(numero_c < 30){
            if(clientes[numero_c].getNombre()==""){
                num_cliente=numero_c;
                numero_c=30;
            }
            numero_c++;
        }
        clientes[num_cliente].crear_cuenta();
    }
    do{
        cout << "escribe el codigo del servicio : ";
        cin >> codigo_s;
        for(int i=0;i<15;i++){
            if(servicios[i].getCodigoServicio()==codigo_s){
                num_servicio=i;
            }
        }
        if(!(servicios[num_servicio].getCodigoServicio()==codigo_s)){
            system("cls");
            cout << "codigo incorrecto \n";
        }
    }while(!(servicios[num_servicio].getCodigoServicio()==codigo_s));
    cout << "datos del servicio a realizar\n";
    cout << servicios[num_servicio].info_servicio() << "\n";
    cout << "si desea continuar presione una tecla y enter\n";
    cin >> continuar;
    int num_servicio_realizado_01;
    for(int i=0;i<20;i++){
        if(empleados[identificador_empleado].getMecanico().getServicio(i).getCodigoServicio()==""){
            num_servicio_realizado_01=i;
            i=20;
        }
    }
    int num_servicio_realizado_02;
    for(int i=0;i<20;i++){
        if(clientes[num_cliente].getServicioPrestado(i).getNombre_servicio()==""){
            num_servicio_realizado_02=i;
            i=20;
        }
    }
    empleados[identificador_empleado].getMecanico().setServicio(servicios[num_servicio],num_servicio_realizado_01);
    empleados[identificador_empleado].getMecanico().getServicio(num_servicio_realizado_01).setPedir_Tiempo_servicio();
    clientes[num_cliente].setServicioPrestado(empleados[identificador_empleado].getMecanico().getServicio(num_servicio_realizado_01),num_servicio_realizado_02);
}
void Opcion_Servicio(Servicio servicios[15]){
    int opcion_S;
    string continuar;
    do{
        interfaz_Servicio();
        cin >> opcion_S;
        switch(opcion_S){
            case 1:
            {
                system("cls");
                for(int i=0;i<20;i++){
                    if(!(servicios[i].getNombre_servicio()=="")){
                        cout << servicios[i].info_servicio() << "\n";
                    }
                }
                cout << "escriba una letra y presione enter para continuar : ";
                cin >> continuar;
                break;
            }
            case 2:
            {
                int num_agregar_servicio;
                for(int j=0;j<20;j++){
                    if(servicios[j].getNombre_servicio()==""){
                        num_agregar_servicio=j;
                        j=20;
                    }
                }
                servicios[num_agregar_servicio].crear_servicio();
                break;
            }
            break;
            case 3:
            break;
            default:
            opcion_S=4;
            break;
        }
    }while(!(opcion_S==3));
}
void Opcion_Cliente_Mecanico(Cliente clientes[30]){
    int opcion_CM;
    //variable de cliente
    string nombre_cliente;
    int num_cliente;
    do{
        interfaz_Cliente_Mecanico();
        cin >> opcion_CM;
        //encontrar cliente
        system("cls");
        cout << "escribir el nombre del cliente : ";
        cin >> nombre_cliente;
        for(int i=0;i<30;i++){
            if(nombre_cliente==clientes[i].getNombre()){
                num_cliente=i;
            }
        }
        if(!(clientes[num_cliente].getNombre()==nombre_cliente)){
            int numero_c;
            while(numero_c < 30){
                if(clientes[numero_c].getNombre()==""){
                    num_cliente=numero_c;
                    numero_c=30;
                }
                numero_c++;
            }
            clientes[num_cliente].crear_cuenta();
        }
        switch(opcion_CM){
            case 1:
            cout << "----------------------------Servicio----------------------------\n";
            for(int i=0;i<20;i++){
                if(!(clientes[num_cliente].getServicioPrestado(i).getCodigoServicio()=="")){
                    cout << clientes[num_cliente].getServicioPrestado(i).info_servicio() << "\n";
                }
            }
            break;
            case 2:
            clientes[num_cliente].Datos_Cliente();
            break;
            case 3:
            break;
            default:
            opcion_CM=4;
            break;
        }
    }while(!(opcion_CM==3));
}
void Opciones_Sesion_Mecanico(Empleados empleados[15],int identificador_empleado,Cliente clientes[30],Servicio servicios[15]){
    int opcion_SM;
    do{
        interfaz_Sesion_Iniciada_Mecanico(empleados,identificador_empleado);
        cin >> opcion_SM;
        switch(opcion_SM){
            case 1:
            Opcion_Prestar_Servicio(empleados,identificador_empleado,clientes,servicios);
            break;
            case 2:
            Opcion_Servicio(servicios);
            break;
            case 3:
            Opcion_Cliente_Mecanico(clientes);
            break;
            case 4:
            break;
            default:
            opcion_SM=5;
            break;
        }
    }while(!(opcion_SM=4));
}
//iniciar sesion
void Acceder_cuenta(Empleados empleados[15],int identificador_empleado,string encontrar,Cliente clientes[30],Motocicleta motocicletas[20],Repuesto repuestos[50],Servicio servicios[15]){
    string _correo;
    string _password;
    string mensaje_activacion;
    identificador_empleado=0;
    do{
        system("cls");
        cout << "escriba su correo : ";
        cin >> _correo;
        mensaje_activacion="no";
        //encontrar correo
        for(int i = 0; i < 15; i++){
            if(_correo==empleados[i].getCorreo()){
                identificador_empleado=i;
            }
        }
        if(!(_correo==empleados[identificador_empleado].getCorreo())){
            cout << "no existe el correo, si desea intentarlo de nuevo escriba si : ";
            cin >> mensaje_activacion;
            //si desea regresar
            if(!(mensaje_activacion=="si")){
                mensaje_activacion="NOT";
            }
        }
    }while(mensaje_activacion=="si");
    if(mensaje_activacion=="no"){
        //correo encontrado
        int mensaje_password=0;
        do{
            mensaje_password=0;
            cout << "escriba la contrasenia : ";
            cin >> _password;
            if(!(_password==empleados[identificador_empleado].getPassword())){
                system("cls");
                cout << "contrasenia incorrecta \n";
                mensaje_password=1;
            }
        }while(mensaje_password==1);
        encontrar="si";
    }else{
        //volver atras
        encontrar="no";
    }
    if(encontrar=="si"){
        if(empleados[identificador_empleado].getOcupacion()=="vendedor"){
            Opcion_Sesion_Vendedor(empleados,identificador_empleado,clientes,motocicletas,repuestos);
        }else{
            Opciones_Sesion_Mecanico(empleados,identificador_empleado,clientes,servicios);
        }
    }
}
//fin
int main(){
    //variables repuesto
    Repuesto repuestos[50];
    Inicializador_Repuestos(repuestos);
    //variables motocicletas
    Motocicleta motocicletas[20];
    Inicializador_Motocicleta(motocicletas);
    //variables servicios
    Servicio servicios[15];
    Inicializador_Servicios(servicios);
    //variables empleados
    Empleados empleados[15];
    int num_empleados_crear=5;
    int identificador_empleado=0;
    string encontrar;
    Inicializador_Empleados(empleados);
    //variables clientes
    Cliente clientes[30];
    Inicializador_Cliente(clientes);
    //opciones
    simulacion_estatica(clientes,servicios,empleados,repuestos,motocicletas);
    int opcion=0;
    do{
        interfaz_Bienbenida();
        cin >> opcion;
        switch(opcion){
            case 1:
            Acceder_cuenta(empleados,identificador_empleado,encontrar,clientes,motocicletas,repuestos,servicios);
            break;
            case 2:
            empleados[num_empleados_crear].Crear_Cuenta_Empleado();
            num_empleados_crear++;
            break;
            case 3:
            {
                //creacion de reportes
                //reportes de productos
                ofstream stock("reporte_de_stock.txt");
                if(!stock.is_open()){
                    cout << "error\n";
                    return 1;
                }
                stock << "-------------------MOTOS-------------------\n";
                for(int i=0;i<20;i++){
                    if(!(motocicletas[i].getMarca_m()=="")){
                        stock << motocicletas[i].stock_moto() << "\n";
                    }
                }
                stock << "-----------------REPUESTOS------------------\n";
                for(int i=0;i<20;i++){
                    if(!(repuestos[i].getMarca_r()=="")){
                        stock << repuestos[i].stock_repuesto() << "\n";
                    }
                }
                stock.close();

                //reporte de cliente y sus productos

                ofstream reporte_clientes("reporte_de_clientes.txt");
                if(!reporte_clientes.is_open()){
                    cout << "error\n";
                    return 1;
                }
                for(int i=0;i<30;i++){
                    if(!(clientes[i].getNombre()=="")){
                        reporte_clientes << "---------------------------------------\n";
                        reporte_clientes << clientes[i].Datos_Cliente() << "\n";
                        reporte_clientes << "-----------------MOTOS------------------\n";
                        for(int j=0;j<20;j++){
                            if(!(clientes[i].getCompraMotos(j).getMarca_m()=="")){
                                reporte_clientes << clientes[i].getCompraMotos(j).Datos_Venta_moto() << "\n";
                            }
                        }
                        reporte_clientes << "-----------------REPUESTOS------------------\n";
                        for(int k=0;k<20;k++){
                            if(!(clientes[i].getCompraRepuesto(k).getNombreR()=="")){
                                reporte_clientes << clientes[i].getCompraRepuesto(k).datos_venta_repuesta() << "\n";
                            }
                        }
                    }
                }
                reporte_clientes.close();
                //reporte de servicios
                ofstream reporte_servicio_empleado("reporte_de_servicios.txt");
                if(!reporte_servicio_empleado.is_open()){
                    cout << "error\n";
                    return 1;
                }
                for(int i=0;i<15;i++){
                    if(!(servicios[i].getNombre_servicio()=="")){
                        reporte_servicio_empleado << servicios[i].info_servicio() <<"\n";
                        reporte_servicio_empleado << "clientes que adquirieron el servicio\n";
                        for(int j=0;j<30;j++){
                            for(int k=0;k<20;k++){
                                if(clientes[j].getServicioPrestado(k).getNombre_servicio()==servicios[i].getNombre_servicio()){
                                    reporte_servicio_empleado << clientes[j].Datos_Cliente() << "\n";
                                    reporte_servicio_empleado << empleados[i].Datos_servicios();
                                }
                            }
                        }
                    }
                }
                reporte_servicio_empleado.close();
                opcion=3;
                break;
            }
            
            default:
            opcion=4;
            break;
        }
    }while(!(opcion==3));
    return 0;
}