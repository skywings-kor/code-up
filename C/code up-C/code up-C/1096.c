#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main(void)
{
	int a, first,second;
	
	int baduk[20][20] = { 0 };
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		scanf("%d %d", &first,&second);

		baduk[first][second] = 1;


	}

	for (int q = 1; q <= 19; q++)
	{
		for (int w = 1; w <= 19; w++)
		{
			printf("%d ", baduk[q][w]);
		}
		printf("\n");
	}

	return 0;

}