#include <stdio.h>
/**
 *main - Print special message
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	printf("\n");
	return (0);
}
