#include<stdio.h>
int main(){
	// integers
	int num = 100;
	int num2 = 50;
	int sum = num + num2;
	float myFloat = 20.05;
	char myChar = 'D';
	char myName[] = "Radhika Ghimire";
	printf("My integer - %d\n", num);
	printf("My Floating num - %f\n", myFloat);
	printf("My character - %c\n", myChar);
	printf("The sum of %1d and %2d is %3d\n", num, num2, sum);
	printf("THe sum is %d\n", num + num2);
	printf("You, me and the audacity of that %s\n", myName);
	printf("The first character of your name is : %c\n", myName[0]);
	myName[0] = 'D';
	printf("So, the changed name is %s\n", myName);
	return 0;
}