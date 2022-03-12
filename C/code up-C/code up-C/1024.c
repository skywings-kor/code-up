#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	char a[50] = "";
	int i;

	scanf("%s", a);
	
	for (i = 0; i <= 50; i++)
	{
		printf("\'%c\'\n", a[i]);

		if (a[i + 1] == NULL)
		{
			break;
		}
	}


}