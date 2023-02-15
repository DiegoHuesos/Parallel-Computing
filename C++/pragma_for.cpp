#include <iostream>
#include <omp.h>

using namespace std;

int main(){
    int thread_id = 0;
    int num_threads = 0;
    double start = 0;
    double end = 0; 
    long long int i = 0;

    const int SIZE = 100;
    int* a = new int[SIZE];
    int* b = new int[SIZE];
    int* c = new int[SIZE];

    omp_set_num_threads(4);

    start = omp_get_wtime();
    #pragma omp parallel shared(num_threads,i,a,b,c) private(thread_id)
    {
        num_threads = omp_get_num_threads();
        thread_id = omp_get_thread_num();

        #pragma omp for schedule(static, 25)
        for(i = 0; i < SIZE ; i++){
            c[i] = a[i] + b[i];
            cout << "Hilo " << thread_id << " ejecuta " << i << "\n";
        }
    }
    end = omp_get_wtime();
    cout << end - start << "\n\n";

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}