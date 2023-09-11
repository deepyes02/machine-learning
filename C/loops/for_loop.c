#include<stdio.h>
int main(){
	int limit = 100;
	char * my_array[3] = {"Cow", "Dog", "Monkey"};
	int size_of_array = sizeof(my_array) / sizeof(my_array[0]);
	printf("No of items : %d\n", size_of_array);
	for(int x = 0; x < size_of_array; x++){
		printf("%s\t", my_array[x]);
	}
	printf("\n");
}