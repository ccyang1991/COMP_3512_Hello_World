#include "../Hello World/lab1.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace HelloUnitTests
{	
	// Greatest common demoniator
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
		return -1; // somehow?
	}
	
	int fibonacci(const int x)
	{
		int z = 0;
		int y = 1;

		// MAGIC NUMBER~~~~
		for(int i = 2; i <= x; ++i)
		{
			z += y;
		}
		return z;
	}


	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestGcd1)
		{
			const int a = 1;
			const int b = 2;
			int result = gcd(a, b);
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(TestGcd2)
		{
			const int a = 8;
			const int b = 24;
			int result = gcd(a, b);
			Assert::AreEqual(8, result);
		}

		TEST_METHOD(TestFibonacci1)
		{
			int result = fibonacci(3);
			Assert::AreEqual(2, result);
		}

		TEST_METHOD(TestFibonacci2)
		{
			int result = fibonacci(4);
			Assert::AreEqual(3, result);
		}
	};
}