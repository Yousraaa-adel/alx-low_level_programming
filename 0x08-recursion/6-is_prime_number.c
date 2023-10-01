#include "main.h"

int check_p(int o, int l)
{
	if (o <= 1 || (o != l && o % l == 0))
	{
		return (0);
	}
	else if (o == l)
	{
		return (1);
	}

	return check_p(o, l + 1);
}

int is_prime_number(int n)
{
	return check_p(n, 2);
}
