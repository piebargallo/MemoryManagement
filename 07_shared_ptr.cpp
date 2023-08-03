#include <iostream>
#include <memory> // for std::shared_ptr

class Recurso
{
public:
	Recurso() { std::cout << "Recurso adquirido\n"; }
	~Recurso() { std::cout << "Recurso destruido\n"; }
};

int main()
{
	Recurso* res{ new Recurso };
	std::shared_ptr<Recurso> ptr1{ res };
	{
	std::shared_ptr<Recurso> ptr2{ ptr1 };
	std::cout << "Eliminando uno de los punteros shared\n";
	}
	std::cout << "Eliminando otro de los punteros shared\n";
	return 0;
}