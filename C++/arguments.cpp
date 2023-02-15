#include<iostream>

int main(int argc, char** argv){

    //argc --> argument count
    //argv --> argument value

    if(argc == 1) { // i.e. si no hay parámetros
        std::cout << "No introdujiste parámetros " << argv[0];
    }else{ // Si hay parámetros
        for(int i = 1; i < argc; i++){
            std::cout << "Parámetro " << i << ": " << argv[i] << "\n";
        }
    }

    return 0;
}