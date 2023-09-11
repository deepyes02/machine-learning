#include <stdio.h>
int main()
{
	int num_1;
	int num_2;
	int sum;
	printf("Input the first num\n");
	scanf("%d", &num_1);
	printf("Input the second number\n");
	scanf("%d", &num_2);
	// if all is well, let's add the two numbers
	sum = num_1 + num_2;
	printf("You input %d and %d\n", num_1, num_2);
	printf("Your sum is %d\n", sum);
	return 0;
}