#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	char a[2500];
	fgets(a, 2499, stdin);
	printf("%s", a);
	return 0;
}