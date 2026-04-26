#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int i = 10, j = 10;
//	for (i = 0; i <= 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("hello!");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

int main()
{
	int a = 10, b = 20;
	int c = 0;
	int sum = 10;
	while (sum != 0)
	{
		if (c < (a + b))
		{
			c += (a + b);
			c = c / 5;
		}
		printf("%d\n", c);
		sum--;
	}
	
	return 0;
}