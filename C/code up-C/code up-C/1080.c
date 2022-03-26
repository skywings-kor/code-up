#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main(void)
{
	int user;
	int res;
	res = 0;
	scanf("%d", &user);

	for (int i = 1;i<=1000 ; i++)
	{
		res = i + res;
		if ((res==user)||(user<=res))
		{
			printf("%d", i);
			break;
		}
	}


}