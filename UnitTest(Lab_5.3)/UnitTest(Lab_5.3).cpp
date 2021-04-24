#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_5.3/A.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab53
{
	TEST_CLASS(UnitTestLab53)
	{
	public:
		
		TEST_METHOD(Test_Const_Init)
		{
			A a(1312);
			Assert::AreEqual(a.Get_x(), 1312);
		}
	};
}
