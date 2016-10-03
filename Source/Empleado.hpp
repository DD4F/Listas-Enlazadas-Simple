#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP
#include <iostream>
#include <string>

using namespace std;

// Se crea la clase nodo Empleado 
class Empleado{
    public:
        Empleado(); //Constructor
        virtual ~Empleado(); // Destructor
        void setId(string dato);
	//se define metodo modificador de Id y se pasa por parametro un string
        string getId();
	 //se define metodo selector de Id el cual va retornar un string
        void setNombre(string info);
	//se define metodo modificador de Nombre y se pasa por parametro un string
        string getNombre();
	 //se define metodo selector de Nombre el cual va retornar un string
        void setApellido(string info);
	//se define metodo modificador de Apellido y se pasa por parametro un string
        string getApellido();
	 //se define metodo selector de Apellido el cual va retornar un string
        void setCelular(string dato);
	//se define metodo modificador de Celular y se pasa por parametro un string
        string getCelular();
	 //se define metodo selector de Celular el cual va retornar un string
        void setEdad(int dato);
	//se define metodo modificador de Edad y se pasa por parametro un entero
        int getEdad();
	 //se define metodo selector de Celular el cual va retornar un entero
        void setCiudad(string dato);
	//se define metodo modificador de Ciudad y se pasa por parametro un string
        string getCiudad();
	 //se define metodo selector de Ciudad el cual va retornar un string
        void setSiguiente(Empleado *sig);
	//se define metodo modificador de Siguitente y se pasa por parametro un Empleado
        Empleado * getSiguiente();
	 //se define metodo selector de Siguiente el cual va retornar un Empleado
    protected:
    private:
        string Id, Nombre, Apellido, Celular, Ciudad;
	// Se declaran los atrutos necesarios como string
        int Edad;
	// se delara edad como entero
        Empleado * Siguiente;
	// Declaramos nuetro apuntador siguiente 

};

#endif // EMPLEADO_H
