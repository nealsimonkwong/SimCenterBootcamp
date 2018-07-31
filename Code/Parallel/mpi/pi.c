#include <stdio.h>
#include <time.h> // load pre-built functions involving stopwatch

static int long numSteps = 1e9;
int main() {
	double pi = 0;
	double time = 0;
	double dx = 1.0 / numSteps;
	double x = dx / 2.0; // initialize value of x
	double currFunc = 0; // intermediate var only for clarity
	clock_t begin = clock(); // start timing the operation
	for(int i=0; i<numSteps; i++) {
		currFunc = 4.0/(1+x*x);
		pi = pi + (currFunc*dx);
		x += dx; // faster way of incrementing x
	}

//	printf("PI = %f \n",pi); // show value of pi only

	clock_t end = clock(); // stop timing the operation
	time = (double)(end - begin) / CLOCKS_PER_SEC * 1e6; // convert time to ms
	printf("PI = %f, duration: %f ms\n",pi,time);
	return 0;
}
