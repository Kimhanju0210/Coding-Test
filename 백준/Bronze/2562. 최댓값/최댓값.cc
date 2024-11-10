#include <stdio.h>
int main ()
{
	int max;
	int a, k, i;
	int n[9];
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &n[i]);
	}
	k = 0;
	max = n[0];
	for (i = 0; i < 9; i++)
	{
		if (n[i] > max)
		{
			k = i;
			max = n[i];
		}
	}
	printf("%d\n", max);
	printf("%d\n", k+1);
	return 0;
}