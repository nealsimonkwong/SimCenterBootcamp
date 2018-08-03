#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // load pre-built functions involving stopwatch
// #define LUMP 5

static int long numSteps = 1e4;
int main(int argc, char **argv) {
	double pi = 0;
	double time = 0;
	double dx = 1.0 / numSteps;
	double x = dx / 2.0; // initialize value of x
	double currFunc = 0; // intermediate var only for clarity
	clock_t begin = clock(); // start timing the operation

/*
	numP = MPI_Com_Size();
	procID = MPI_COM_Rank();
	iStart = f(data, numP, procID);
	iEnd = ;
*/

	  int numP, procID;

	  // the usual mpi initialization
	  MPI_Init(&argc, &argv);
	  MPI_Comm_size(MPI_COMM_WORLD, &numP);
	  MPI_Comm_rank(MPI_COMM_WORLD, &procID);


	int iStart = (procID / numP) * numSteps;
	int iEnd = ((procID+1) / numP) * numSteps;
	for(int i=iStart; i<iEnd; i++) {
		currFunc = 4.0/(1+x*x);
		pi = pi + (currFunc*dx);
		x += dx; // faster way of incrementing x
	}


  // process 0 is only one that needs global data
  double *globalData=NULL;
  if (procID == 0) {
    globalData = (double *) malloc( numP * sizeof(double) );
    for (int i=0; i<numP; i++) {
      globalData[i] = 0;
    }
  }
  
  MPI_Gather(&pi, 1, MPI_DOUBLE, globalData, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);

  if (procID == 0) {
    double total = 0;	
    for (int i=0; i<numP; i++) {
	total += globalData[i];
    }
  }

  if (procID == 0) {
    free(globalData); // delete pointer to globalData to free up memory for other tasks
  }

  MPI_Finalize();


	clock_t end = clock(); // stop timing the operation
	time = (double)(end - begin) / CLOCKS_PER_SEC * 1e6; // convert time to ms
	printf("PI = %f, duration: %f ms\n",pi,time);
	return 0;
}

