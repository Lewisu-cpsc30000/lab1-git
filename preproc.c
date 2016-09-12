#include <stdio.h>

/* Only change any of these 4 values */
#define U0 0
#define U1 -1
#define U2 0
#define U3 0

int main(void) {
	int a;
	char *s;

	printf("Exploring Preprocessing:\n====================\n");

	/* for loop */
	for(a=0; a<U0; a++) {
		printf("Happy ");
	}
	printf("\n");

	/* switch statement */
	switch(V1) {
		case 0:		printf("Lewis Univ\n");
		case 1: 	printf("Go Flyers\n");	break;
		case 2: 	printf("CAS\n");
		case 3: 	printf("Computer Science\n");		break;
		case 4:		printf("CPS3000\n");	break;
		case 5:		printf("Romeoville\n");
		default:	printf("Illinois!\n");
	}

	/* ternary operator */
	s = (U3==3) ? "Go" : "Boo";

	/* if statement */
	if(U2) {
		printf("\n%s FLYERS!\n",s);
	} else  {
		printf("\n%s SPARTAN!\n",s);
	}

	return 0;
}
