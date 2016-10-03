#include "Empleado.hpp"
#include <iostream>
#include <string>

using namespace std;

Empleado::Empleado(){
    //ctor
    Id="";
    Nombre="";
    Apellido="";
    Celular="";
    Edad = 0;
    Siguiente = NULL;
}

Empleado::~Empleado(){
    //dtor
}
void Empleado::setId(string dato){
//en este metodo modificador la variable Id toma el valor del parametro dato
    Id = dato;
}

string Empleado::getId(){
//en el metodo selector se retorna el valor almacenado en Id
	return Id;
}

void Empleado::setNombre(string info){
//en este metodo modificador la variable Nombre toma el valor del parametro Info
    Nombre = info;
}

string Empleado::getNombre(){
//en el metodo selector se retorna el valor almacenado en Nombre
    return Nombre;
}

void Empleado::setApellido(string info){
//en este metodo modificador la variable Apellido toma el valor del parametro Info
    Apellido = info;
}

string Empleado::getApellido(){
//en el metodo selector se retorna el valor almacenado en Apellido
    return Apellido;
}

void Empleado::setCelular(string dato){
//en este metodo modificador la variable Celular toma el valor del parametro dato
    Celular = dato;
}

string Empleado::getCelular(){
//en el metodo selector se retorna el valor almacenado en Celular
    return Celular;
}

void Empleado::setEdad(int dato){
//en este metodo modificador la variable Edad toma el valor del parametro dato
    Edad = dato;
}

int Empleado::getEdad(){
//en el metodo selector se retorna el valor almacenado en Edad
    return Edad;
}

void Empleado::setSiguiente(Empleado* sig){
//en este metodo modificador la variable Siguiente toma el valor del parametro *sig
    Siguiente = sig;
}

Empleado * Empleado::getSiguiente(){
//en el metodo selector se retorna el valor almacenado en Siguiente
    return Siguiente;
}
void Empleado::setCiudad(string dato){
//en este metodo modificador la variable Ciudad toma el valor del parametro dato
    Ciudad = dato;
}

string Empleado::getCiudad(){
//en el metodo selector se retorna el valor almacenado en Ciudad
    return Ciudad;
}

