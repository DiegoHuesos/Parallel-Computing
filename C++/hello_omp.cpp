#include <iostream>
#include <omp.h>

using namespace std;

int main(){

    //Set max num threads
    cout << "set_num_threads" << "\n";
    omp_set_num_threads(4);
    //Print num threads
    cout << "num_threads: " << omp_get_num_threads() << "\n";  //Número de hilos activos
    cout << "max_threads: " << omp_get_max_threads() << "\n";

    int thread_id = 0;
    int num_threads = 0;
    double start = 0, end = 0; 

    start = omp_get_wtime();
    
    //Contexto de ejecución en paralelo
    #pragma omp parallel shared(num_threads) private(thread_id)
    {  //Tiene que abrir en nextline

        num_threads = omp_get_num_threads();
        thread_id = omp_get_thread_num(); //Identificador de cada uno de los hilos
        
        
        //Sólo lo ejecuta el hilo masestro, i.e., el que tiene el id == 0
        #pragma omp master
        {
            cout << "Hay " << num_threads << " hilos.\n";
        }
        #pragma omp barrier
        
        

        cout << thread_id << endl ;
    }
    end = omp_get_wtime();

    cout << end - start << "\n\n";
    return 0;
}