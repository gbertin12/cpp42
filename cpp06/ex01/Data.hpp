#include <string>

typedef struct 
{
	std::string	animal;
	std::string book;
	std::string actor;
	std::string car;
	int			number;
} Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);