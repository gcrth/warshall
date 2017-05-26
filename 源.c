#define _CRT_SECURE_NO_WARNINGS 
#include"stdio.h"
#include"string.h"
#include"math.h"
int main()
{
	//freopen("test_1.txt", "r", stdin);
	int k, i, j, n, M[100][100],x;
	char s[1000];
	gets(s);
	n = strlen(s)/2+1;
	for (i = 1; i < n; i++)
	{
		gets(s + i * 2 * n);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			M[i][j] = s[2 * n*i + 2 * j] - '0';
		}
	}
	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				x = M[i][j] + M[i][k] * M[k][j];
				if (x == 0)
				{
					M[i][j] = 0;
				}
				else
				{
					M[i][j] = 1;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", M[i][j]);
			if (j != n - 1)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}