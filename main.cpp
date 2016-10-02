#include <iostream>
#include "Empleado.hpp"
#include "ListaEmpleado.hpp"
#include <stdlib.h>

using namespace std;

int main(){
    Empleado *aux;
    ListaEmpleado *lista = new ListaEmpleado();
    //ListaEmpleado *lista2 = new ListaEmpleado();
    int opc = 0; // Se declara a variable de la opcion del menu en 0
	// Se crea unc cilco que mientras la opcionsea dfrente de 0 permanesca en este
    do{
    aux = new Empleado();
    cout << "Bienvenido!" << endl;
    cout << "1 - Agregar empleado"<<endl;
    cout << "2 - Mostrar Lista de Empleados"<<endl;
    cout << "3 - Buscar empleado por ID"<<endl;
    cout << "4 - Mostrar lista ordenada alfabeticamente"<<endl;
    cout << "0 - Salir"<<endl;
    cin >> opc;

    switch(opc){
        case 0: {
		// Si la opcion es 0, se saldra del programa
            cout <<"Adios!!"<<endl;
        }
        break;
        case 1:{
		// Si opcion es igual a 1, es agregar un nuevo Empleado
            system("clear");
            lista->Llenar(aux); // Se invoca el metodo de llenado
            lista->addEmpleado(aux); // Despues agregar se le pasa por paramatro nuestro Empleado nuevo
        }
        break;
        case 2:{
		//Caso que nos muestra la Lista de Empleados
            system("clear");
            lista->mostrarList(aux);
        }
        break;
        case 3:{
		// caso que busca a un Empleado por el No de Identificacion
            system("clear");
            string idBuscar;
            cout <<"Ingrese la ID del empleado que desea buscar: "<<endl;
            cin >>idBuscar;
            lista->mostrarEmpleadoID(idBuscar);
		//Mostramos nuestro Empleado buscado por ID, Si lo encontro si no 
		// mandara un mensaje Empleado no encontrado
        }
        break;
        case 4:{
		// caso que uestra nuestra lista de Empleados ordenados por Apellidos Alfabeticamente
            system("clear");
            lista->ordenarAsc(); // Se llama el metodo de ordenamiento
        }
        break;
        default:{
		// POr defecto si no es niguna de esas opciones les dara error y vuelva a digitar
            system("clear");
            cout <<"Error, intentelo nuevamente!"<<endl;
        }
    }
    }while(opc!=0); // Mientras la opcion sea diferente de cero no se saldra del ciclo

    return 0;
}
