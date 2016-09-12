#include <stdio.h>
#include <string.h>


int main(int argc, char** argv) {
	int i;
	char *str = "First Lab CPSC30000!", ch;
	for (i = 0; i < strlen(str); i++)
		ch = str[i];

	printf("%s\n",str);

	return 0;
}
