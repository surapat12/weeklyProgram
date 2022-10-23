#include<stdio.h>
void matrix()
{
	int a[3][3], b[3][3], c[3][3];
	int i, j;
	for (i = 0; i < 3; i++)
		scanf_s("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	for (i = 0; i < 3; i++)
		scanf_s("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
	for (i = 0; i < 3; i++)
		printf("\n%d %d %d\n", c[i][0], c[i][1], c[i][2]);

}
int main()
{
	matrix();
	return 0;
}