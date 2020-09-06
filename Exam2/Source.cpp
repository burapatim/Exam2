#include<stdio.h>
#include<math.h>
int main()
{
	int x, i, j = 0;
	scanf_s("%d", &x);
	while (x > 10)
	{
		i = x;
		while (i > 10)
		{
			j += i % 10;
			i = (i - (i % 10)) / 10;
		}
		j += i;
		printf("%d\n", j);
		x = j;
		j = 0;
	}
	return 0;
}
