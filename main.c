#include <stdio.h>
#include<stdlib.h>
#define N 100

int main(int argc, char *argv[])
{
	char str[N];
	int Q, i, j = 0, que[N];

	for (i = 0; i<N; i++)
	{
		que[i] = '\0';
	}

	while (fgets(str, sizeof(str), stdin))
	{
		Q = atoi(str);

		if (Q == 0)
		{
			for (i = 0; i<j; i++)
			{
				printf("%d", que[i]);

				if (i<j - 1)
					printf(",");
			}
			printf("\n");
		}

		else if (Q == -1)
		{
			printf("%d\n", que[0]);
			for (i = 0; i<j; i++)
				que[i] = que[i + 1];
			que[j - 1] = '\0';
			j--;
		}

		else
		{
			que[j] = Q;
			j++;
		}
	}

	return 0;
}
