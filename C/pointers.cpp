#include<stdio.h>

int main(){
	int myAge = 34;
	printf("My age is %d\n", myAge);
	printf("Memory address of myAge is %p\n", &myAge);

	int dob = 1989;
	int *myDobPointer = &dob;

	printf("My dob is %d\n", dob);
	printf("Memory address of my dob, stored in variable myDobPointer is %p\n", myDobPointer);
	printf("Memory address value of &dob is %p\n", &dob);
	printf("You can also deference pointer, to get its value\n");
	printf("The value of variable from pointer myDobPointer is %d\n", *&dob);

}