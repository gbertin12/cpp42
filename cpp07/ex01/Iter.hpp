#include <cstdio> 
#include <iostream>

template <typename T, typename F>
void iter(T *ptr, size_t size, F func)
{
	for (size_t i = 0; i < size; i++)
		func(ptr[i]);
}

template <typename T>
void sampleFunc(T a)
{
	std::cout << a << std::endl;
}