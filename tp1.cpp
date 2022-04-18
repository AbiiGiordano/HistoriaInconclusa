#include "tp1.h"


void imprimir_coincidencias(int* vector_coincidencias, int cant_coincidencias){

    if(cant_coincidencias){
        std::cout << "Los indices donde existen coincidencias son: " << std::endl;

        for (int i = 0; i < cant_coincidencias; i++)
            std::cout << vector_coincidencias[i] << " ";
        std::cout << "\n";
    }
    else
        std::cout << "No existen coincidencias" << std::endl;
}


void extender_vector(int* &vector_indices, int cant_coincidencias){

    int* vector_extendido = new int[cant_coincidencias];

    for (int i = 0; i < cant_coincidencias - 1; i++)
        vector_extendido[i] = vector_indices[i];

    delete[] vector_indices;
    vector_indices = vector_extendido;
}


void almacenar_indice(int* &vector_indices, int cant_coincidencias, int indice){

    if (cant_coincidencias != 1)
        extender_vector(vector_indices, cant_coincidencias);

    vector_indices[cant_coincidencias - 1] = indice;
}


bool es_coincidencia(char* cadena, char* clave, int indice_cadena){

    int indice_clave = 0;

    while(tolower(cadena[indice_cadena + indice_clave]) == tolower(clave[indice_clave]) && clave[indice_clave + 1] != '\0')
        indice_clave++;

    return tolower(cadena[indice_cadena + indice_clave]) == tolower(clave[indice_clave]);
}


int* buscar_coincidencias(char* cadena, char* clave, int &cant_coincidencias){

    int* vector_indices = new int[1];

    for (int i = 0; cadena[i] != '\0'; i++){

        if (es_coincidencia(cadena, clave, i)){

            cant_coincidencias++;
            almacenar_indice(vector_indices, cant_coincidencias, i);
        }
    }
    return vector_indices;
}







