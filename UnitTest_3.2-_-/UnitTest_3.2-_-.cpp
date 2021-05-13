#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.2/HardDrive.h"
#include "../Lab_3.2/HardDrive.cpp"
#include "../Lab_3.2/Computer.h"
#include "../Lab_3.2/Computer.cpp"
#include "../Lab_3.2/ComputerWithMonitor.h"
#include "../Lab_3.2/ComputerWithMonitor.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest32
{
	TEST_CLASS(UnitTest32)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ComputerWithMonitor N(2000, "Samsung", 6000, 15);
			Assert::AreEqual(N.GetPrice(), 6000);
		}
	};
}
