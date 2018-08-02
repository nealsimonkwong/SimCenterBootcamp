#include <stdio.h>
#include <stdlib.h>
// int addSelf(int n);

int main(int argc, const char **argv) {
  if (argc < 2) {
    printf("Program needs an integer argument\n");
    return(-1);
  }

  int n = atoi(argv[1]);
  int fact = n + 2;
  printf("plusTwo(%d) is %d\n",n, fact);

	printf("first element of argv is %s\n",argv[0]);

  return 0;
}

/*
// recursive function; i.e. it calls itself
int addSelf(int n) {
  if (n == 1) 
    return 1;
  else 
    return n*factorial(n-1);
}
*/	       

