#include "ListaEmpleado.hpp"
#include "Empleado.hpp"
#include <iostream>
#include <string>

using namespace std;

ListaEmpleado::ListaEmpleado(){
    	//Inicialmente la lista esta vacía, la cabeza apunta a nulo.
	Cabeza = NULL;
}
ListaEmpleado::~ListaEmpleado(){
    //dtor
}
void ListaEmpleado::setCabeza(Empleado* cab){
//Implementación del método que asigna el primer Empleado de la lista (Empleado Cabeza).
    Cabeza = cab;
}

Empleado* ListaEmpleado::getCabeza(){
//Implementación del método para obtener el primer Empleado de la lista (Empleado Cabeza).
    return Cabeza;
}

void ListaEmpleado::Llenar(Empleado* emp){
	//Implementamos el metodo de Pedir los datos necesarios del Empleado a registrar
    string id,nombre,apellido,cell, ciudad;
    int edad;
	// Se declaran las varianles necesarias a Utilizar ya sean enteras o de tipo string
    cout <<"Ingresa la ID del empleado"<<endl; // Se pide por teclado el Id del Empleado
    cin >> id;
    emp->setId(id);
	// se llama al metodo modificador setId y se pasa por parametro Id
    cout <<"Ingrese el nombre del empleado" << endl; // Se pide por teclado el Nombre
    cin >> nombre;
    emp->setNombre(nombre);
	// se llama al metodo modificador setNombre y se pasa por parametro nombre
    cout <<"Ingrese el apellido del empleado"<<endl; // Se pide por teclado el Apellido
    cin >> apellido;
    emp->setApellido(apellido);
	// se llama al metodo modificador setApellido y se pasa por parametro Apellido
    cout <<"Ingrese el celular del empleado"<<endl; // Se pide por teclado el No De Celular
    cin >> cell;
    emp->setCelular(cell);
	// se llama al metodo modificador setCelular y se pasa por parametro cell
    cout <<"Ingrese la edad del empleado"<<endl; // Se pide por teclado la Edad del Empleado
    cin >> edad;
    emp->setEdad(edad);
	// se llama al metodo modificador setEdad y se pasa por parametro edad
    cout <<"Seleccione la ciudad donde trabaja el empleado"<<endl; // Le pedimos que seleccione en que ciudad trabaja
    cout <<"Bogota - Barranquilla - Cali - Medellin"<<endl;
    cin >> ciudad;
    emp->setCiudad(ciudad);
	// se llama al metodo modificador setICiudad y se pasa por parametro ciudad
    cout << "Informacion agregada con exito"<<endl; // Le decimos que  la informacion fue agragada con exito
}

Empleado* ListaEmpleado::ultimoEmpleadoLst(){
//Implementación del método que recorre toda la lista (si hay elementos) y devuelve el ultimo Empleado.
    Empleado *temp = Cabeza;
    while(temp != NULL){
        if(temp->getSiguiente() == NULL){
	//Si temp apunta a nulo el nodo temporal (temp) es el ultimo de la lista. Se rompe el ciclo.
            break;
        }
        else{
            temp = temp->getSiguiente();
	//De lo contrario se pasa al siguiente Empleado de la lista.
        }
    }
    return temp; //Se retorna El Ultimo Empleado
}

void ListaEmpleado::addEmpleado(Empleado* nuevo){
//Implementación del método que agregar un nuevo Empleado en la lista.
    if(Cabeza == NULL){ //Lista Vacia
        Cabeza = nuevo;
    }
    else{
        ultimoEmpleadoLst()->setSiguiente(nuevo);
	//Invocamos el Ultimo Empleado Y agregamos el nuevo empleado 
    }
}

void ListaEmpleado::mostrarList(Empleado* empMostrar){
	//Metodo para mostrar todos los Empleado registrados en la lista
	int i=1;
   	cout <<"\nLa informacion registrada es: "<<endl;
    	empMostrar = getCabeza();
    	while( empMostrar!= NULL){
	// Se hace un ciclo que me muestre los Empleado registrados hasta que sea diferente de NULL
        cout <<"\n####################################################"				<< endl;
        cout <<"LOS DATOS DEL EMPLEADO  " << i << " SON: "			<< endl		<<endl;
        cout <<"NOMBRE			: " 			<< empMostrar->getNombre() 	<< endl;
        cout <<"APELLIDO		: "	 		<< empMostrar->getApellido() 	<< endl;
        cout << "IDENTIFICACION 		: " 		<< empMostrar->getId()		<< endl;
        cout << "CELULAR			: " 		<< empMostrar->getCelular()	<< endl;
        cout << "EDAD			: " 			<< empMostrar->getEdad()	<< endl;
        cout << "CIUDAD DE TRABAJO	: " 			<< empMostrar->getCiudad() 	<< endl;
        cout << "#####################################################" 	<< endl		<< endl;
	i++; // Un contador de mpleados Mostrados
        empMostrar = empMostrar->getSiguiente();
	// Se Avanza al siguiente Empleado a mostrar
    }
}

Empleado* ListaEmpleado::BuscarEmpleadoID(string id){
//Implementación del método que busca un Empleado dentro de la lista, pasando como parámetro de búsqueda el
//Numero de Identificacion del Empleado
    Empleado* temp =  Cabeza;
    while(temp != NULL){
        if(temp->getId() == id){
		// Si Temp es igual al id buscado fue porque encontro el Empleado. Se Termina el ciclo
            break;
        }
        else{
		// si no avanzamos temp a nustro siguiente Empleado
            temp = temp->getSiguiente();
        }
    }
    return temp;  // Se Retorna el Empleado Encontrado
}

void ListaEmpleado::mostrarEmpleadoID(string id){
//Metodo donde muestra la informacion del Empleado buscador por Identificacion
    if(BuscarEmpleadoID(id) != NULL){
	// Si es diferente de NULL el Empleado fue encontrado
        cout <<"LOS DATOS DEL EMPLEADO SON: "		<< endl					<< endl;
        cout <<"NOMBRE			:" 		<< BuscarEmpleadoID(id)->getNombre()	<< endl;
        cout <<"APELLIDO		:" 		<< BuscarEmpleadoID(id)->getApellido()	<< endl;
        cout <<"IDENTIFICACION 		:" 		<< BuscarEmpleadoID(id)->getId()	<< endl;
        cout <<"EDAD			:" 		<< BuscarEmpleadoID(id)->getEdad()	<< endl;
        cout <<"CIUDAD DE TRABAJO	:" 		<< BuscarEmpleadoID(id)->getCiudad() 	<< endl;

    }
    else{
	// Si no no Eiste ningun Empleado registrdo con esa identificacion
        cout << "ERROR...  EMPLEADO NO ENCONTRADO!" << endl;
    }

}

void ListaEmpleado::ordenarAsc(){
//Empleado *empMostrar;
Empleado *ant = Cabeza;
Empleado *temp = Cabeza;
Empleado *aux = Cabeza->getSiguiente();
Empleado *ini = Cabeza;

	if(Cabeza == NULL){
		cout << "Lista Vacia..." << endl;
	}else{
		bool Cambio = true;
		while( Cambio != false){
			ant = temp = ini = Cabeza;
			aux = Cabeza->getSiguiente();
			Cambio = false;
			if(ini->getId() > aux->getId()){
				ini->setSiguiente(aux->getSiguiente());
				aux->setSiguiente(ini);
				Cabeza = aux;
				aux = ant;
				temp = ini;
				aux = temp->getSiguiente();
			}else{
				ant = Cabeza;
				temp = ant->getSiguiente();
				aux = temp->getSiguiente();
			}
			while( aux != NULL){
				if(temp->getId() > aux->getId()){
					temp->setSiguiente(aux->getSiguiente());
					ant->setSiguiente(aux);
					aux->setSiguiente(temp);
					ant = aux;
					aux = temp->getSiguiente();
					Cambio = true;
				}else{
					ant = temp;
					temp = aux;
					aux = aux->getSiguiente();
				}
			}
		}
	}

	int i=1;
	cout <<"\nLa informacion registrada es: "<<endl;
	empMostrar = getCabeza();
	while( empMostrar!= NULL){
// Se hace un ciclo que me muestre los Empleado registrados hasta que sea diferente de NULL
       	cout <<"\n####################################################"				<< endl;
       	cout <<"LOS DATOS DEL EMPLEADO  " << i << " SON: "			<< endl		<<endl;
       	cout <<"NOMBRE			: " 			<< empMostrar->getNombre() 	<< endl;
       	cout <<"APELLIDO		: "	 		<< empMostrar->getApellido() 	<< endl;
       	cout << "IDENTIFICACION 		: " 		<< empMostrar->getId()		<< endl;
       	cout << "CELULAR			: " 		<< empMostrar->getCelular()	<< endl;
       	cout << "EDAD			: " 			<< empMostrar->getEdad()	<< endl;
       	cout << "CIUDAD DE TRABAJO	: " 			<< empMostrar->getCiudad() 	<< endl;
       	cout << "#####################################################" 	<< endl		<< endl;
	i++; // Un contador de mpleados Mostrados
       	empMostrar = empMostrar->getSiguiente();
	// Se Avanza al siguiente Empleado a mostrar
	}
}
