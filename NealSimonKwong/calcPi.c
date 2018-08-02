#include <stdio.h>
#include <time.h> // load pre-built functions involving stopwatch
#include <math.h> // load pow() function
static int long numSteps = 100000;
int main() {
	double pi = 0;
	double time = 0;
	// your code
	double dx = 1.0 / numSteps;
	double x = dx / 2.0; // initialize value of x
	double currFunc = 0; // intermediate var only for clarity
	clock_t begin = clock(); // start timing the operation
	for(int i=0; i<numSteps; i++) {
		// your code
		currFunc = 4.0/(1+x*x);
//		currFunc = 4.0/( 1 + (double)pow(x,2.0) ); // utilize pow() function
		pi = pi + (currFunc*dx);
//		x = x + dx;
		x += dx; // faster way of incrementing x
	}
	// your code
//	printf("PI = %f \n",pi); // show value of pi only

//	printf("conv fact is %ld \n", CLOCKS_PER_SEC); // find out units reported by clock() function; CLOCKS_PER_SEC = 1e6

	clock_t end = clock(); // stop timing the operation
//	printf("elapsed time is %f ms\n", (double) (end-begin));
//	time = (double)(end - begin) / CLOCKS_PER_SEC; // convert time from ms to sec
	time = (double)(end - begin); 
	printf("PI = %f, duration: %f ms\n",pi,time);
	return 0;
}
