

#include <iostream>

int main()
{
	for (int i = 100;i >= 1;i--) {

		if (i % 10 == 0) {
			std::endl(std::cout);
		}

		std::cout << "[" << i << "]";
	}
}
