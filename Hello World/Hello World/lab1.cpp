#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int x = 0;

	// start from the highest number and work your way down
	if (a > b)
		x = a;
	else
		x = b;

	while (1)
	{
		if (!(a % x) && !(b % x))
			return x;
		--x;
	}
	return 0; // somehow?
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	int z = 0;
	int y = 1;

	// MAGIC NUMBER~~~~
	for (int i = 2; i <= n; ++i)
	{
		z += y;
	}
	return z;
}
