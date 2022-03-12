#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int a;
	int i = 0;
	int res1,res2,res3,res4,res5;
	scanf("%d", &a);
	
	res1 = a / 10000;
	a = a-res1 * 10000;
	printf("[%d]\n",res1*10000);

	res2 = a / 1000;
	a = a - res2 * 1000;
	printf("[%d]\n", res2 * 1000);

	res3 = a / 100;
	a = a - res3 * 100;
	printf("[%d]\n", res3 * 100);

	res4 = a / 10;
	a = a - res4 * 10;
	printf("[%d]\n", res4 * 10);

	res5 = a / 1;
	a = a - res5 * 1;
	printf("[%d]\n", res5 * 1);



}