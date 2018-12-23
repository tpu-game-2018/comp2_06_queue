//‘—‚ç‚ê‚Ä‚­‚é—v‘f‚ÉI‚í‚è‚Í‚È‚¢
//realloc

#include <stdio.h>
#include <stdlib.h>

typedef struct t
{
	int number;
	struct queue *next;
}queue;


int main(int argc, char *argv[])
{
	char str[7];

	static queue *first = NULL;
	static queue *rear = NULL;


	while (fgets(str, sizeof(str), stdin)) {
		int number = atoi(str);

		//dequeue
		if (number == -1)
		{

			queue *tmp;
			if (first == NULL)
			{
				printf("\n");
			}
			printf("%d\n", first->number);
			tmp = first->next;

			free(first);

			first = tmp;
		}

		//show
		else if (number == 0)
		{
			queue *np = first;
			int i = 0;
			while (1)
			{
				if (np == NULL) break;

				if (i == 0)
				{
					printf("%d", np->number);
					i++;
				}
				else
				{
					printf(",%d", np->number);
				}

				if (np->next == NULL) break;
				np = np->next;
			}
			printf("\n");
		}

		//enqueue
		else
		{
			if (first == NULL)
			{
				queue *newQ = (queue *)malloc(sizeof(queue));
				newQ->next = NULL;
				newQ->number = number;
				first = newQ;
				rear = newQ;
			}
			else
			{
				queue *newQ = (queue *)malloc(sizeof(queue));
				newQ->next = NULL;
				newQ->number = number;
				rear->next = newQ;
				rear = newQ;
			}
		}
	}

	return 0;
}