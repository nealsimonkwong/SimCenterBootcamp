#include <stdio.h>
#include <stdlib.h>
int addSelf(int *myArray, int numEl);

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Program needs an integer argument\n");
    return(-1);
  }

  int *data = 0; // initialize pointer for data
  int numEl = argc - 1; // number of elements in array
  data = (int *)malloc(numEl * sizeof(int)); // allocate memory for variable data
  // create variable data using input string
  for(int i=0; i<numEl; i++) {
	data[i] = atoi(argv[i+1]);
       // printf("%d ",data[i]);
  }
  int sum =0;
  sum = addSelf(data,numEl); // determine sum
  printf("sum of input array is: %d\n",sum); // print sum
  return 0;
}

int addSelf(int *myArray, int numEl) {
	int sum = 0;
	for(int i=0; i<numEl; i++) {
    	//	printf("%d\n", myArray[i]);
		sum = sum + myArray[i];
	}
	return sum;
}
       

