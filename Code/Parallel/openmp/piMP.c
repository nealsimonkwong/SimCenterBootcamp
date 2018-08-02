#include <stdio.h>
#include <time.h> // load timing func
#include <omp.h> // load openMP directives??

static int long numSteps = 1e9;

int main() { // why no input args for main here??

  // perform calculation
  double pi = 0;
  double dx = 1./numSteps;
  double x = 0.5*x;
  double start = omp_get_wtime(); // timing func from openMP??

  // compute using Reduction (slightly faster due to telling compiler += operation for pi coming up)
#pragma omp parallel for reduction(+:pi) 
    for (int i=0; i<numSteps; i++) {
      // x += 0.5*dx;  code in original sequential implementation
      // but now loop dependent .. so replace with the following
      x = (i+0.5)*dx;  // which while greatly slowing process gives speedup!
      pi += 4./(1.+x*x);
    }

    pi *= dx;

    double end = omp_get_wtime(); // stop clock for reduction 
    printf("Reduction: PI = %16.14f in %.4g sec\n",pi, end-start);

    start = omp_get_wtime(); // start timing for synchronization 

  // compute using Synchronization    
#pragma omp parallel 
    {
      double sum = 0; // can this line go right after #pragma omp for?
#pragma omp for
      for (int i=0; i<numSteps; i++) {
	x = (i+0.5)*dx;
	sum += 4./(1.+x*x);
      }
#pragma omp critical
      pi += sum; // this section ensures only 1 thread accesses "pi" at a time
    }

    pi *= dx;

    end = omp_get_wtime(); // stop timing for synchronization
    printf("Synchronization: PI = %16.14f in %.4g sec\n",pi, end-start);
    return 0;
}
