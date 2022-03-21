#include "mpi.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int rank, size;

    MPI_Init(&argc, &argv); // Iniciando MPI
    MPI_Comm_size(MPI_COMM_WORLD, &size); // Obtenemos el nro de procesos a lanzar
    MPI_Comm_rank(MPI_COMM_WORLD, &rank); // Obtenemos la identificacion de nuestro proceso

    cout<<"Hello World desde el proceso "<<rank<< " de "<<size<<" que somos"<<endl;

    MPI_Finalize();

    return 0;
}
