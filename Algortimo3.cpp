# include <iostream>  // Para utilizar cin y cout
# include <stdlib.h>  // Librería para poder usar comandos del sistema y funciones de conversion de datos
# include <fstream>   // Para no tener que usar el prefijo std antes de cin y cout

using namespace std;

int main() {
	int cantidad;
	string clave;
	float descuentomenor;
	int gananciassemanacuatro;
	int gananciassemanados;
	int gananciassemanatres;
	int gananciassemanauno;
	int ganancias[10];
	int ganancias1;
	int gananciasmes;
	int gastos[10];
	int gastos1;
	int indice;
	int mayor1;
	int menor1;
	int mayor2[10];
	int menor[10];
	string nombre_producto[10];
	string nombre_producto1;
	int opcion1;
	int opcion_;
	int precio_compra[10];
	int precio_compra1;
	int precio_venta[10];
	int precio_venta1;
	string producto;
	float productos_comprados[10];
	float productos_comprados1;
	int productos_vendidos[10];
	int productos_vendidos1;
	string usuario;
	int ventas[10];
	int ventas1;
	int ventasemanacuatro;
	int ventasemanados;
	int ventasemanatres;
	int ventasemanauno;
	int ventasmes;
	int total_productos;
	int menor2;
	int arreglo = 0;
	fstream archivo;

    //Se pone el nombre fijo
    char nombre[] = "inventario.txt";

    // Lo primero es abrir el archivo
    archivo.open(nombre);
 	archivo >> nombre_producto[arreglo];
	while (archivo.eof()!=true)
    {
		//esto lo puse como la miss y me da error, por eso lo deje asi
        archivo >> precio_compra[arreglo];
        archivo >> precio_venta[arreglo];
        archivo >> productos_comprados[arreglo];
        archivo >> productos_vendidos[arreglo];
		archivo >> gastos[arreglo];
        archivo >> ventas[arreglo];
        archivo >> ganancias[arreglo];
		arreglo++;
		archivo >> nombre_producto[arreglo];
    }
	archivo.close();
do {
		cout << "Ingrese Usuario : " << endl;
		cin >> usuario;
		cout << "Ingrese Clave : " << endl;
		cin >> clave;
		if (usuario=="EurekaMonterrey" && clave=="Eureka123") {
			cout << "ACCESO PERMITIDO" << endl;
		} else {
			cout << "ACCESO DENEGADO" << endl;
		}
	} while (!((usuario=="EurekaMonterrey" && clave=="Eureka123")));
 	system("cls");	
	do{ 
	cout << "Bienvenido a Eureka" << endl;

	cout << "Menu principal" << endl;
	cout << "Elige una opcion" << endl;
	cout << "1:Inventario" << endl;
	cout << "2:Cantidad de ventas al mes" << endl;
	cout << "3:Ganancias por mes" << endl;
	cout << "4:Salir" << endl;
	cin >> opcion_;
	do {
		if ((opcion_==0 && opcion_>=5)) {
			cout << "opcion no disponible, intenta de nuevo" << endl;
		}
	} while (!((opcion_>0 && opcion_<=4)));
	if ((opcion_==1)) {
		cout << "Menu inventario" << endl;
		cout << "Elija una opcion" << endl;
		cout << "1 = Agregar producto" << endl;
		cout << "2 = Productos con menor y mayor ventas" << endl;
		cout << "3 = Lista de descuentos" << endl;
		cout << "4 = Salir" << endl;
		cin >> opcion1;
		do {
			if (opcion1==0 && opcion1>=5) {
				cout << "opcion no disponible, intenta de nuevo" << endl;
			}
		} while (!((opcion1>0 && opcion1<=4)));
	}
	if (opcion1==1) {
		cout << "Cuantos productos vas a ingresar" << endl;
		cin >> cantidad;
		for (int indice=0; indice<cantidad;indice=indice+1) {
			cout << "Nombre del producto" << endl;
			cin >> nombre_producto[arreglo];
			cout << "Dame el precio de compra del producto" << endl;
			cin >> precio_compra[arreglo];
			cout << "Dame el precio de venta del producto" << endl;
			cin >> precio_venta[arreglo];
			cout << "Dime cuantos productos compraste" << endl;
			cin >> productos_comprados[arreglo];
			cout << "Cuantos productos has vendido" << endl;
			cin >> productos_vendidos[arreglo];
			gastos[arreglo] = precio_compra[arreglo]*productos_comprados[arreglo];
			cout << "El total de inversion/gasto de este producto es:" << gastos[arreglo] << endl;
			ventas[arreglo] = precio_venta[arreglo]*productos_vendidos[arreglo];
			cout << "El total de ventas de este producto es:" << ventas[arreglo] << endl;
			ganancias[arreglo] = ventas[arreglo]-gastos[arreglo];
			cout << "El total de ganancias por este producto es:" << ganancias[arreglo] << endl;
		arreglo++;
		}
	}
	if (opcion1==2) {
		descuentomenor=0;
		mayor1=ventas[0];
		menor2=ventas[0];
		for (int indice=0; indice<arreglo; indice++){
			if(ventas[indice]>mayor1){
			mayor1=ventas[indice];
			}
			if (ventas[indice]<menor2){
			menor2=ventas[indice];
			}	
		}
		cout << "El producto con mayor ventas es:" << mayor1 << endl;	 
		cout << "El producto con menor ventas es:" << menor2 << endl;
		descuentomenor = menor2*0.80;
		cout << "Para mover las ventas de este producto tendraas que modificar el precio a " << descuentomenor << endl;
	}

	
		
	if (opcion1==3) {
		cout << "El descuento de este mes es de un bono de 500 pesos en cualquier compra" << endl;
		cout << "El descuento de hoy es 10 por ciento menos en tu compra" << endl;
		cout << "El descuento por seguirnos en nuestras redes es de un 5 por ciento en la compra" << endl;
	}
	if (opcion1==4) {
	}
	// Fin de inventario
	if (opcion_==2) {
		cout << "Cuanto vendiste la primera semana" << endl;
		cin >> ventasemanauno;
		cout << "Cuanto vendiste la segunda semana" << endl;
		cin >> ventasemanados;
		cout << "Cuanto vendiste la tercera semana" << endl;
		cin >> ventasemanatres;
		cout << "Cuanto vendiste la cuarta semana" << endl;
		cin >> ventasemanacuatro;
		ventasmes=ventasemanauno+ventasemanados+ventasemanatres+ventasemanacuatro;
		cout << "El total de ventas al mes es:" << ventasmes << endl;
	}
	if (opcion_==3) {
		cout << "Cuanto obtuviste de ganancias la primera semana" << endl;
		cin >> gananciassemanauno;
		cout << "Cuanto obtuviste de ganancias la segunda semana" << endl;
		cin >> gananciassemanados;
		cout << "Cuanto obtuviste de ganancias la tercera semana" << endl;
		cin >> gananciassemanatres;
		cout << "Cuanto obtuviste de ganancias la cuarta semana" << endl;
		cin >> gananciassemanacuatro;
		gananciasmes=gananciassemanauno+gananciassemanados+gananciassemanatres+gananciassemanacuatro;
		cout << "El total de ganancias en el mes es de:" << gananciasmes << endl;
		if (gananciasmes>=4000) {
			cout << "Eureka, puedes rentar el local" << endl;
		} else {
			cout << "No puedes rentar el local, tal vez el siguiente mes" << endl;
		}
	}
	
	// Fin ventas mes
	// Y ahora vamos a vaciar la info de los arreglos al archivo
     archivo.open(nombre, fstream::out);

    // Se procesan todos los registros del archivo y se guardan en los arreglos
    for(int i=0; i<arreglo; i++)
    {
		//tambien aca, se supone que es algo asi
        archivo << nombre_producto[i]<<endl;
        archivo << precio_compra[i]<<endl;
        archivo << precio_venta[i]<<endl;
        archivo << productos_comprados[i]<<endl;
        archivo << productos_vendidos[i]<<endl;
		archivo << gastos[i]<<endl;
		archivo << ventas[i]<<endl;
		archivo << ganancias[i]<<endl;
		
    }
    // Se cierra el archivo para que se graben los cambios
    archivo.close();
	} while (opcion_!=4);
	
    return 0;
}
