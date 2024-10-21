#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.6.2.it/lab.6.2.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -1, 2, -3, 4, -5, 6 };
			int size = 6;
			int sum = SumOddIndices(A, size);

			// Очікувана сума елементів з індексами 1, 3, 5 = 2 + 4 + 6 = 12
			Assert::AreEqual(12, sum);
		}
	};
}
