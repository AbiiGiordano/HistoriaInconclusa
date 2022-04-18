#include "tp1.h"


int main(int argc, char* argv[]){

    if (argc < 3){
        std::cout << "Cantidad insuficiente de argumentos" << std::endl;
        return -1;
    }

    int cant_coincidencias = 0;
    int* vector_coincidencias = buscar_coincidencias(argv[1], argv[2], cant_coincidencias);

    imprimir_coincidencias(vector_coincidencias, cant_coincidencias);

    delete[] vector_coincidencias;

    return 0;
}

