#include <iostream>

template <typename T>
class Array {
	public:

		Array() : _size(1) {
			std::cout << "Default Constructor Called" << std::endl;
			this->_data = new T[1];
		}

		Array(unsigned int size) : _size(size) {
			std::cout << "Constructor Called" << std::endl;
			this->_data = new T[size];
		}

		~Array() { 
			std::cout << "Destructor Called" << std::endl;
			delete[] _data;
		}

		Array(const Array& other)
		{
			this->_size = other._size;
			this->_data = new T[other._size];
			for (unsigned int i = 0; i < other._size; i++)
				this->_data[i] = other._data[i];
		}

		Array& operator=(const Array& other) {
			if (this != other)
			{
				delete[] _data;
				this->_data = new T[other._size];
				this->_size = other._size;
				for (unsigned int i = 0; i < other._size; i++)
					this->_data[i] = other._data[i];
			}
			return *this;
		}

		T& operator[](unsigned index) {
			if (index >= _size)
				throw Array::IndexTooHighException();
			return (_data[index]);
		}

		unsigned int	size() {
			unsigned int i = 0;

			for (i = 0; i < _size; i++)
			{
				if (_data[i] == nullptr)
					break ;
			}
			return (i);
		}

		class IndexTooHighException : public std::exception {
		public:
			virtual const char *what() const throw()
			{
				return ("Index out of range");
			}
	};

	private:
		unsigned int	_size;
		T*				_data;
};