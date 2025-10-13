#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char queue[1000][5];
	int first;
	int last;
} queue;

void print_queue(queue *q)
{
	for (int i = q->first; i <= q->last; i++)
	{
		if (i == q->last)
			printf("%s", q->queue[i]);
		else
			printf("%s ", q->queue[i]);
	}
	printf("\n");
}

void main()
{
	queue west;
	queue north;
	queue south;
	queue east;
	queue result;

	west.first = 0;
	west.last = -1;
	north.first = 0;
	north.last = -1;
	south.first = 0;
	south.last = -1;
	east.first = 0;
	east.last = -1;
	result.first = 0;
	result.last = -1;

	char entry[5];
	char coordinate[2] = {'0', '0'};

	while (1)
	{
		gets(entry);
		// if the user enters 0, we will break the loop
		if (entry[0] == '0')
			break;
		// we will add the plane to the stack
		if (entry[0] == 'A')
		{
			if (coordinate[0] == '-' && coordinate[1] == '1')
				strcpy(west.queue[++west.last], entry);
			else if (coordinate[0] == '-' && coordinate[1] == '3')
				strcpy(north.queue[++north.last], entry);
			else if (coordinate[0] == '-' && coordinate[1] == '2')
				strcpy(south.queue[++south.last], entry);
			else if (coordinate[0] == '-' && coordinate[1] == '4')
				strcpy(east.queue[++east.last], entry);
		}
		// we will change the coordinate and jump to the beginning of the loop
		if (entry[0] == '-')
		{
			coordinate[0] = entry[0];
			coordinate[1] = entry[1];
			coordinate[2] = '\0';
		}
	}

	while (west.first <= west.last || north.first <= north.last || south.first <= south.last || east.first <= east.last)
	{
		if (west.first <= west.last)
		{
			strcpy(result.queue[++result.last], west.queue[west.first++]);
		}
		if (north.first <= north.last)
		{
			strcpy(result.queue[++result.last], north.queue[north.first++]);
		}
		if (south.first <= south.last)
		{
			strcpy(result.queue[++result.last], south.queue[south.first++]);
		}
		if (east.first <= east.last)
		{
			strcpy(result.queue[++result.last], east.queue[east.first++]);
		}
	}

	print_queue(&result);
}