#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>


// PRE: argc > 2.
// POST: Devuelve el vector con las coincidencias tras recorrer la cadena y la clave.
int* buscar_coincidencias(char* cadena, char* clave, int& cant_coincidencias);


// PRE: -
// POST: Devuelve true si la clave se encuentra en la cadena, false en caso contrario.
bool es_coincidencia(char* cadena, char* clave, int indice_cadena);


// PRE: cant_coincidencias > 0.
// POST: Almacena en el vector el indice de la coincidencia encontrada.
void almacenar_indice(int*& vector_indices, int cant_coincidencias, int indice);


// PRE: cant_coincidencias > 1.
// POST: Extiende un vector de tamaño n a uno de tamaño n + 1.
void extender_vector(int*& vector_indices, int cant_coincidencias);


// PRE: -
// POST: Imprime por pantalla los indices de las coincidencias, y de no
// haberlas imprime un mensaje comunicandoselo al usuario.
void imprimir_coincidencias(int* vector_coincidencias, int cant_coincidencias);


#endif // FUNCIONES_H_INCLUDED
