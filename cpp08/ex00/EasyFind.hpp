#include <iostream> 
#include <algorithm> 

class IntNotFoundException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("Int not found in container");
		}
};

template <typename T>
typename T::iterator easyFind(T &container, int value)
{
	typename T::iterator ret_v = std::find(container.begin(), container.end(), value);
	if (ret_v != container.end())
		return ret_v;
	else
		throw IntNotFoundException();
};