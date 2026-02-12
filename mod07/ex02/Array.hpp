#pragma once

#include <string>
#include <iostream>

template <typename T>
class Array
{
private:
	T* 		arr;
	size_t 	len;
public:
	Array() : len(0) {
		this->arr = new T[this->len];
	};
	Array(unsigned int n) : len(n) {
		this->arr = new T[this->len];
	};
	Array(const Array<T>& other) : len(other.size()) {
		if (&other == this)
			return ;
		this->arr = new T[len];
		for (size_t i = 0; i < len; i++)
			this->arr[i] = other[i];
	};

	T& operator[](size_t i) const {
		if (i >= this->len)
			throw Array<T>::OutOfBounds();
		return arr[i];
	};

	Array& operator=(const Array& other) {
		if (&other == this)
			return *this;
		if (this->arr != NULL)
			delete [] arr;
		len = other.size();
		this->arr = new T[len];
		for (size_t i = 0; i < len; i++)
			this->arr[i] = other[i];
		return *this;
	};

	class OutOfBounds : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	size_t size() const {
		return (this->len);
	};

	~Array() {
		if (arr != nullptr)
			delete [] arr;
	};
};

template <typename T>
const char* Array<T>::OutOfBounds::what() const throw()
{
	return "Index out of bounds";
}
