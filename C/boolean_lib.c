#include<stdio.h>
#include<stdbool.h>

int main(){
	int num;
	bool statement;
	printf("Please input a positive number between 0 and 9,999,999,999,999 and I will tell you if it is even.\n");
	scanf("%d", &num);
	
	//Exit the program immediately if the input is not greater than zero or larger than 999999999
	if(num > 999999999 | num < 1){printf("Sorry the num should be between 0 and 999999999 \n"); return 0;}
	// After above test passes, run the code below

	if(num % 2 == 0){
		printf("Your input num %d is even.", num);
	} else {
		printf("Your input num %d is not even.", num);
	}
	printf("\n");
	return 1;
}