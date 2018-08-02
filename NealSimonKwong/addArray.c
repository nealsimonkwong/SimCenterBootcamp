#include <stdio.h>
#include <stdlib.h>
int addSelf(int myArray, int numEl);

int main(int argc, const char **argv) {
  if (argc < 2) {
    printf("Program needs an integer argument\n");
    return(-1);
  }

  int *data; // initialize pointer for data
  int numEl = argc - 1; // number of elements in array
  data = (int *)malloc(numEl * sizeof(int)); // allocate memory for variable data
  // create variable data using input string
  for(int i=0; i<numEl; i++) {
	data[i] = atoi(argv[i+1]);
  }
  sum = addSelf(data,numEl);
  printf("sum of input array is: %d\n",sum);

//  printf("3rd el of data array is: %d\n", data[2]); 

//  int n = atoi(argv[1]);
//  int fact = factorial(n);
//  int fact = n + 2;
//  printf("factorial(%d) is %d\n",n, fact);

  return 0;
}


// recursive function; i.e. it calls itself
int addSelf(int myArray, int numEl) {
/*
  if (n == 1) 
    return 1;
  else 
    return n*factorial(n-1);
*/
	int sum = 0;
	for(int i=0; i<numEl; i++) {
		sum = sum + myArray[i];
	}
}
       

