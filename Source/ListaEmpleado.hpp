#ifndef LISTAEMPLEADO_HPP
#define LISTAEMPLEADO_HPP
#include "Empleado.hpp" // Se invoca la clase Empleado

// Se Crea la Clase ListaEmpleado
class ListaEmpleado{
    public:
        ListaEmpleado();   //Método constructor de la clase ListaEnlazada. 
        virtual ~ListaEmpleado(); //Destructor 
	//Método modificador para asignar un nodo en la cabeza de la lista.
	void setCabeza(Empleado* cab);
	//Método para obtener el primer nodo de la lista.
        Empleado* getCabeza();
	//Método que devuelve el ultimo nodo de la lista
        Empleado* ultimoEmpleadoLst();
	//Método para agregar un nuevo nodo en la lista.
        void addEmpleado(Empleado *nuevo);
	 //Método para pedir los datos que requiere la lista de un empleado.
        void Llenar(Empleado* emp);
	 //Método para mostrar los nodos(Empleados) registrados en la lista.	
        void mostrarList(Empleado *empMostrar);
	//Método que buscar un Empleado dentro de la lista
        Empleado* BuscarEmpleadoID(string id);
	//Método que mostrar el Empleado buscado dentro de la lista
        void mostrarEmpleadoID(string id);
	//Método de ordenamiento para ordenar la lista alfabeticamente por apellidos.
	void ordenarAsc();
    protected:
    private:
        Empleado* Cabeza;
};

#endif // LISTAEMPLEADO_H
