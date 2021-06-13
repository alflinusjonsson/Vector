#include "Vector.h"
#include <iostream>

int main() {

	Vector<int> values;

	values.EmplaceBack(1);
	values.EmplaceBack(2);
	values.EmplaceBack(3);
	values.EmplaceBack(4);
	values.EmplaceBack(5);

	std::cout << "Not using iterator" << std::endl;
	for (int i = 0; i < values.Size(); i++) {
		std::cout << values[i] << std::endl;
	}

	std::cout << "Using iterator" << std::endl;
	for (int value : values) {
		std::cout << value << std::endl;
	}

	std::cin.get();
}