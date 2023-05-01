#include <stdio.h>
#include <stdlib.h>

void print_bytes(int bytes);

/**
 *main - Entry to complication
 *
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: 0 on success
 *
 */
int main(int argc, char **argv)
{
	int bytes;

	if (argc != 2)
	{
	printf("Error");
	exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
	printf("Error");
	exit(2);
	}

	print_bytes(bytes);
}

/**
 *print_bytes - the first bytes of main
 *
 *@bytes: The number to print
 *
 */
void print_bytes(int bytes)
{
        int i;
        unsigned char *main_n;
        main_n = (unsigned char *)&main;

        for (i = 0; i < bytes; i++)
        {

	if (i != 0)
	{
	printf(" ");
	}
        printf("%2x", main_n[i]);
        }
        printf("\n");
}
