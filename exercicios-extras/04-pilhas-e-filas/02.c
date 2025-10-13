#include <stdio.h>
#include <string.h>

int number_of_diamonds(const char *expression)
{
	int pile = 0;
	for (int i = 0; expression[i] != '\0'; i++)
	{
		if (expression[i] == '(')
		{
			pile++;
		}
		else if (expression[i] == ')')
		{
			pile--;
			if (pile < 0)
			{
				return 0; // More closing parentheses than opening ones
			}
		}
	}
}

int main()
{
	char expression[1001];
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", expression);
		printf("%d\n", number_of_diamonds(expression));
	}
	return 0;
}