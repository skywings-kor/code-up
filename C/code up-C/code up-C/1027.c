#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int a, b, c;

	scanf("%d.%d.%d", &a, &b, &c);
	printf("%02d-%02d-%04d", c,b,a);


}