//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning (disable:4996)
//
//int main(void)
//{
//	int a, b;
//	char high;
//	high = 0;
//	char stu[10000]={""};
//	scanf("%d", &a);
//
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//
//		stu[i] = b;
//		high = b;
//	}
//
//	
//	for (int i = 0; i<a-1; i++)
//	{
//		
//		if ((stu[i]<high) && (stu[i] < stu[i + 1]))
//		{
//			high = stu[i];
//		}
//		else if ((stu[i+1] < high) && (stu[i+1] < stu[i]))
//		{
//			high = stu[i + 1];
//		}
//
//		else
//		{
//			high = high;
//		}
//		
//		
//	}
//	printf("%d", high);
//	return 0;
//	
//}