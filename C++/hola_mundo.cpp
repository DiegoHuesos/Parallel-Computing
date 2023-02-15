#include<iostream>

int main(){

    int dato = 20;
    int* apuntador = &dato;

    std::cout << "Dato " << dato << std::endl;
    std::cout << "Dirección de Dato " << &dato << std::endl;
    std::cout << "Dato " << *apuntador << std::endl;
    std::cout << "Dirección de Dato " << apuntador << std::endl;
    std::cout << "Dirección del apuntador " << &apuntador << std::endl;


    dato = 44;
    std::cout << "Dato " << dato << std::endl;
    std::cout << "Dato " << *apuntador << std::endl;

    dato = 88;
    std::cout << "Dato " << dato << std::endl;
    std::cout << "Dato " << *apuntador << std::endl;


    //Arreglos estáticos
    // En el stack (memoria chiquita que no crece)
    int numeros[5];

    int longitud = sizeof(numeros) / sizeof(int);

    for(int i = 0; i< longitud; i++){
        std::cout << numeros[i] << std::endl;
    }
    //Sólo se puede usar para los estáticos
    for(int numero : numeros){
        std::cout << numero << std::endl;
    }


    //Arreglos dinámicos
    // En el heap (memoria grandota que crece)
    int N = 5;
    int* numeros_dinamicos = new int[N]{11,12,13,14,15};

    delete[] numeros_dinamicos; //Muy importante


    return 0;
}

/*
endl es el flush del buffer de memoria, imprime en línea todo lo que estaba en el buffer

/n se acumula en el buffer hasta que termine y al imprimir formatea las línea nuevas
*/