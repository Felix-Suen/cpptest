#include <iostream>
#include "HSLAPixel.h"

int main()
{
	HSLAPixel test = HSLAPixel(1,2,3,4);
	std::cout << test.h << std::endl;
	std::cout << test.s << std::endl;
	std::cout << test.l << std::endl;
	std::cout << test.a << std::endl;
}
