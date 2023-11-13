/**
 * factorial - returns the factorial of a given number
 * @n: the number
 *
 * Return: int (-1, 1 or factorized number)
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));

	return (-1);
}
