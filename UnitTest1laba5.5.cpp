#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\Yaryna visual studio\laba5.5\5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1laba55
{
	TEST_CLASS(UnitTest1laba55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double n;
			n = f(1.0);
			Assert::AreEqual(n, 1.0);
		}
	};
}
