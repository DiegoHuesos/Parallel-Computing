#include <iostream>
#include <omp.h>

using namespace std;

int main(){

    cout << "Hola \n\n";

    cout << "num_threads: " << omp_get_num_threads() << "\n";
    cout << "max_threads: " << omp_get_max_threads() << "\n";

    //Set max num threads
    cout << "set_num_threads" << "\n";
    omp_set_num_threads(4);

    cout << "num_threads: " << omp_get_num_threads() << "\n";
    cout << "max_threads: " << omp_get_max_threads() << "\n";

    cout << "\nAdios.\n";
    return 0;
}