#include <algorithm>
#include <iostream>

class NotFoundException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Value not found in container";
    }
};

template <typename T>
typename T::iterator easyfind(const T& a, int to_find)
{
	typename T::iterator ret = std::find(a.begin(), a.end(), to_find);
	if (ret == a.end())
		throw NotFoundException();
	return ret;
}