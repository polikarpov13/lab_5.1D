#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/5/lab_5.1D/lab_5.1D/Pair.cpp"
#include "../../../../../політех/ооп/5/lab_5.1D/lab_5.1D/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong l(15, 25);
			Assert::AreEqual(25.0, l.getYounger());
		}
	};
}
