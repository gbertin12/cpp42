#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>
#include <deque>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		
		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack &copy) : std::stack<T>()
		{ *this = copy; }
		virtual ~MutantStack() {};
		MutantStack		&operator=(MutantStack &rhs) 
		{
			(void)rhs;
			return *this; 
		}


		iterator	end() {
			return this->c.end();
		}

		iterator	begin() {
			return this->c.begin();
		}
};

#endif