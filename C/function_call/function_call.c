#include<stdio.h>

const char* sayMyName(char* name){
	return name;
}

int main(){
	char myName[20] = "Radhika Ghimire";
	printf("%s\n", myName);
	return 0;
}