#include "Span.hpp"

Span::Span() : capacity(0)
{
}

Span::Span(unsigned int N) : capacity(N)
{
}

Span::Span(const Span& other)
{
	Span(other.capacity);
}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	Span(other.capacity);
	return *this;
}

void Span::addNumber(int i)
{
	if (Array.size() >= capacity)
		throw SpanFull();
	Array.push_back(i);
}

unsigned int Span::longest_span() const
{
	if (Array.size() <= 1)
		throw NoNumber();
	auto it = std::minmax_element(Array.begin(), Array.end());
	return (it.second - it.first);
}

unsigned int Span::shortest_span() const
{
	int size = Array.size();
	if (size <= 1)
		throw NoNumber();
	unsigned int small_span = (Array[0] < Array[1]) ? (Array[1] - Array[0]) : (Array[0] - Array[1]);
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (abs(Array[i] - Array[j]) < small_span)
				small_span = abs(Array[i] - Array[j]);
			if (i + j < size && abs(Array[i] - Array[i + j]) < small_span)
				small_span = abs(Array[i] - Array[j]);
		}
	}
}

Span::~Span()
{
}
