#include <iostream>
#include <iterator>
#include <algorithm>

class Span
{
private:
	std::vector<int> Array;
	unsigned int capacity;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	void addNumber(int i);
	class SpanFull : public std::exception {
		virtual const char *what() const throw();
	};
	unsigned int longest_span() const;
	unsigned int shortest_span() const;
	class NoNumber : public std::exception {
		virtual const char *what() const throw();
	};
	~Span();
};