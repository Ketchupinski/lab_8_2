#include "pch.h"
#include "CppUnitTest.h"
//#include "../lab_8_2/lab_8_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Something
{
	TEST_CLASS(Something)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[100] = { "aka xkx lal gass xtt wow" };
			Assert::AreEqual(4, Count(s));
		}
	};
}
