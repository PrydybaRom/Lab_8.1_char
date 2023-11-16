#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Lab_08.1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			const int arraySize = 101;
			char str[arraySize]{ "one+-e==" };


			int eCount = countSymbolsEquals(str);

			Assert::AreEqual(eCount, 2);

		}
	};
}
