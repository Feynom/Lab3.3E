#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3.3E/Lab3.3E/Fraction.h"
#include "../Lab3.3E/Lab3.3E/Fraction.cpp"
#include "../Lab3.3E/Lab3.3E/Pair.h"
#include "../Lab3.3E/Lab3.3E/Pair.cpp"
#include "../Lab3.3E/Lab3.3E/Object.h"
#include "../Lab3.3E/Lab3.3E/Object.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33E
{
	TEST_CLASS(UnitTest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction a(1, 5), b(1, 5);
			Assert::AreEqual(a == b, true);
		}
	};
}
