#include "factors.h"

void _factor(long int val);

/**
 * main - entry point
 * @argc: Number of args
 * @argv: Arguments passed
 *
 * Return:Nothing
 */

int main(int argc, char **argv)
{
	FILE *fp;
	long int val;

	if (argc != 2)
	{
		printf("Usage: %s <file>\n", argv[0]);
		return (1);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error accessing file required");
		return (1);
	}
	while (fscanf(fp, "%ld", &val) == 1)
	{
		_factor(val);
	}

	if (!feof(fp))
	{
		printf("Read Failure");
	}

	fclose(fp);

	return (0);
}
