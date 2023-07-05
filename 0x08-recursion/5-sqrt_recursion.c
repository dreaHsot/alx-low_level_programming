/**
 * _sqrt_recursion - calculates the natural square root of a number n
 * @n: number whose square root is calculated
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	int sqr_fun(int n, int sqr);

	int sqr = 1;

	return (sqr_fun(n, sqr));
}

/**
 * sqr_fun - helper function to for _sqrt_recursion
 * @n: number whose square root is calculated
 * @sqr: square root to check
 * Return: the natural square root of n
 */
int sqr_fun(int n, int sqr)
{
	if (n == sqr * sqr)
		return (sqr);
	else if (sqr < n)
		return (sqr_fun(n, sqr + 1));
	else
		return (-1);
}
