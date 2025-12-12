#ifndef BRAIN
#define BRAIN
#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();
	std::string getIdea(int i) const;
	void setIdea(std::string idea, size_t i);
};

#endif