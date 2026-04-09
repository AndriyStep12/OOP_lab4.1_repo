#include "pch.h"
#include "CppUnitTest.h"
#include "../LinearEquation.h"
#include "../QuadraticEquation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestLinearEquationLogic)
		{
			LinearEquation validEq(2, -4);
			LinearEquation invalidEq(0, 5);

			Assert::IsTrue(validEq.ExistsRoot());
			Assert::IsFalse(invalidEq.ExistsRoot());
		}

		TEST_METHOD(TestQuadraticEquationLogic)
		{
			QuadraticEquation validEq(1, -3, 2); 
			QuadraticEquation invalidEq(1, 2, 5);

			Assert::IsTrue(validEq.ExistsRoot());
			Assert::IsFalse(invalidEq.ExistsRoot());
		}
	};
}