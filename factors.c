#include "factors.h"

void _factor(long int val)
{
	long int j = 2;

	while (j <= val / 2)
	{
		if (val % j == 0)
		{
			mpz_t quotient;
			mpz_init(quotient);
			mpz_set_si(quotient, val / j);
			gmp_printf("%ld=%Zd*%ld\n", val, quotient, j);
			mpz_clear(quotient);
			break;
		}
		j++;
	}
}
