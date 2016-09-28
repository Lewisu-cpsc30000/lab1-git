#include <stdio.h>

/* Only change any of these 4 values */
#define U0 3 // Say "Fun" 3 times, when a equals 0, 1, and 2
#define U1 3 // Needs to be 3 to say "Computer Science" in the switch
#define U2 3 // This needs to be > 0
#define U3 3 // Need U3 == 3 to return true

int main(void) {
	int a;
	char *s;

	printf("Exploring Preprocessing:\n====================\n");

	/* for loop */
	for(a=0; a<U0; a++) {
		printf("Fun "); // Change from "Happy " to "Fun "
	}
	printf("\n");

	/* switch statement */
	switch(U1) { // Used to be V1, but I think that was just a typo
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
