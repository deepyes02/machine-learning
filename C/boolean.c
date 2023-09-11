#include<stdio.h>
// Type definition
typedef enum{true,false} myTypeDefinition;
// The easiest way seems to be using the boolean library intead of this
int main(){
	myTypeDefinition statement = true;
	if(statement == true){
	printf("Boolean Man is true"); // prints 0 or 1
	}
	else if(statement == false) {
		printf("Boolean Man is false");
	}
	else {
		printf("Something bad has happened");
	}
}