#include "factors.h"

#define MAX_LINE 100

void _factor(mpz_t val);

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
	char line[MAX_LINE];
	mpz_t val;

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
	while (fgets(line, sizeof(line), fp) != NULL)
	{
		mpz_init(val);
		mpz_set_str(val, line, 10);

		_factor(val);

		mpz_clear(val);
	}
	fclose(fp);

	return (0);
}
