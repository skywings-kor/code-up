#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int a,b;

	scanf("%d-%d", &a,&b);
	printf("%06d%07d", a, b);

	return 0;
}