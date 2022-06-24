#include <stdio.h>

/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: pointer to string with arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void)argv;

	int i, sum, len;
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			len = i;
		}
		sum = i - 1;
		printf("%d",sum);
	}
	else {
		return (0);
	}
}
