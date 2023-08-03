#include <iostream>

template <typename T>
class Auto_ptr
{
	T* m_ptr;
	
public:
	Auto_ptr(T* ptr = nullptr) : m_ptr(ptr) {}
	~Auto_ptr() { delete m_ptr; }
	
	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
};

class Recurso
{
public:
	Recurso() { std::cout << "Recurso adquirido\n"; }
	~Recurso() { std::cout << "Recurso destruido\n";}
};

int main()
{
	Auto_ptr<Recurso> res(new Recurso());
	return 0;
}
