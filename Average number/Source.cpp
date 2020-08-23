#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()

{
	int a, b;
	printf("Enter first number : ");
	scanf_s("%d", &a);
	printf("\nEnter second number : ");
	scanf_s("%d", &b);
	printf("\n");
	if (a > b)
	{
		float sum = 0;
		for (int i = a; i >= b; i--)
		{
			printf("%d ", i);
			sum += i;
		}
		printf("\n");
		float average = sum / ((a - b) + 1);
		printf("\nAverage = %.1f", average);
	}
	if (a < b)
	{
		float sum = 0;
		for (int i = a; i <= b; i++)
		{
			printf("%d ", i);
			sum += i;
		}
		printf("\n");
		float average = sum / ((b - a) + 1);
		printf("\nAaverage = %.1f", average);

	}
	return 0;

}
