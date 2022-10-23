#include<stdio.h>
#include<conio.h>
void arrange5num()
{
	
	int num[5], x, y, temp;
	printf("Enter number : ");
	scanf_s("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	for (x = 0; x < 5; x++)
	{
		for (y = x + 1; y < 5; y++)
		{
			if (num[y] < num[x])
			{
				temp = num[x];
				num[x] = num[y];
				num[y] = temp;
			}
		}
	}
	printf("Arrange number from min to max\n");
	printf("Number is : ");
		for (x = 0; x < 5; x++)
		{
			printf("%d  ", num[x]);
	}
}
int main()
{

	arrange5num();

	return 0;
}