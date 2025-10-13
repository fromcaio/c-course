#include <stdio.h>
#include <string.h>

int is_balanced(const char *expression)
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
	return pile == 0; // Check if all opening parentheses are closed
}

int main()
{
	char expression[1001];
	while (scanf("%s", expression) != EOF)
	{
		if (is_balanced(expression))
		{
			printf("correct\n");
		}
		else
		{
			printf("incorrect\n");
		}
	}
	return 0;
}