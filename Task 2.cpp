#include <iostream>
int main() {
	for (int i = 100;i >= 1;i--) {
		std::cout << "[" << i << "]";
			if (i % 10 == 0 && i != 100) {
				std::endl(std::cout);
			}
		
	}
}
