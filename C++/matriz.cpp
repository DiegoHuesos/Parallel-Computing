#include<iostream>

int main(int argc, char** argv){
    

    int ren = 2;
    int col = 4;

    // reservando memoria dinámica para la matriz
    int** matriz = new int*[ren];

    for(int i = 0; i < ren; i++){
        matriz[i] = new int[col];
    }

    std::cout << matriz << "\n";
    for(int i = 0; i < ren; i++){
        std::cout << matriz[i] << "\n";
        for(int j = 0; j < col; j++){
            std::cout << &matriz[i][j] << " ";
        }
        std::cout << "\n";
    }

    // liberar memoria de la matriz
    for(int i = 0; i < ren; i++){
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}