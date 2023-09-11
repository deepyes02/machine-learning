#include<stdio.h>

int main(){
	/*
	Do while loop is simple, first it runs the code, then checks for the conditions
	Meaning, regardless of the value of max, the code will run at least once. 
	*/
	int max = 12;
	do {
		printf("%d\t", max);
		max++;
	} while (max < 10);
	printf("\n");
}
