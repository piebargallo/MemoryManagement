#include <iostream>

int main()
{
	// Use "new" and "delete"
	int i { 4 };
	int** ptr{ nullptr };
	ptr = new int*;
	*ptr = new int;
	std::cout << ptr << std::endl;
	delete ptr;
	ptr = nullptr;
	return 0;
}