#include "factors.h"

/**
 * _factor - Function for factorization
 * @val: val to factorize
 *
 * Return: nothing
 */

void _factor(mpz_t val)
{
	mpz_t quotient;
	mpz_t remainder;
	mpz_t divisor;

	mpz_init(divisor);

	mpz_init(quotient);

	mpz_init(remainder);

	for (mpz_set_ui(divisor, 2); mpz_cmp(divisor, val) <= 0; mpz_add_ui(divisor, divisor, 1))
	{
		mpz_fdiv_qr(quotient, remainder, val, divisor);

		if (mpz_cmp_ui(remainder, 0) == 0)
		{
			gmp_printf("%Zd=%Zd*%Zd\n", val, quotient, divisor);
			break;
		}
	}
	mpz_clears(divisor, quotient, remainder, NULL);
}
