#include <stdio.h>
int main()
{
	/*
	Let's print multiplication table from 1 1 ja 1 to 10 10 ja 100
	*/
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("%dx%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}
}