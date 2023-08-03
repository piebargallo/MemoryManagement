#include <iostream>
#include <memory> // for std::unique_ptr

class Recurso
{
public:
	Recurso() { std::cout << "Recurso adquirido\n"; }
	~Recurso() { std::cout << "Recurso destruido\n"; }
};

int main()
{
	std::unique_ptr<Recurso> res{ new Recurso() };
	return 0;
}