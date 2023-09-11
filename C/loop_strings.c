#include <stdio.h>
#include <string.h>

int main () {
	char carName[] = "Maruti";
	int i;

	for (i = 0; i < strlen(carName); i++) {
		printf("%c ", carName[i]);
	}
	printf("\"%s\" is %lu characters long..\n", carName, strlen(carName));
	printf("The size of the string %s is %lu bytes\n", carName, sizeof(carName));
}