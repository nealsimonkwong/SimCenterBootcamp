#include <stdio.h>
int main() {
	int nDigit = 0; int nWhite = 0; int nOther = 0;
	char c;
	while ((c = getchar()) != EOF) {
	if (c==EOF) {
		break;
	}
	else {
		switch(c) {
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				nDigit ++;
/*
			case ' ':
				nWhite ++;
				break;
			default: 
				nOther ++;
*/
		} 
	}
	}
	printf("Num digits: %d \n",nDigit);	
//	printf("Num digits: %d Num spaces: %d Num other: %d \n",nDigit,nWhite,nOther);	

	return 0;
}
