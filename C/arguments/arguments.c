#include<stdio.h>
/**
 * argc - String -- num of arguments passed, defaults to 1
 * argv - [array] - array of characters passed as arguments
*/
int main (int argc, char *argv[]){
	//by default the number of argument is equal to 1, not zero. 
	printf("The first argument supplied is %s\n", argv[1]); // Prints the first argument provided
}