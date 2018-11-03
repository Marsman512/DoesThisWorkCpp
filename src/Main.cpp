#include <iostream>
#include <string>
#include "ApplicationData.h"

int main()
{
	std::cout << "Enter some text" << std::endl;
	std::getline(std::cin, ApplicationData::testString);
	std::cout << "You entered: " << ApplicationData::testString << std::endl;

	std::cin.get();
	return 0;
}