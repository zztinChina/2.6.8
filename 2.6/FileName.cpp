#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;
	if (n <= 2)
	{
		printf("%d", a);
	}
	for (i = 0; i < n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d", c);
	return 0;
}