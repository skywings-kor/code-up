#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int a, b, c;

	scanf("%d.%d.%d", &a, &b,&c);
	printf("%04d.%02d.%02d", a, b,c);

	return 0;
}