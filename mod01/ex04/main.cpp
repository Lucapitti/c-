#include "Sed.hpp"

void	write_to_file(std::ofstream& outputFile, std::ifstream& infile, std::string cmp, std::string sub)
{
	std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
	size_t pos = 0;
	while ((pos = content.find(cmp, pos)) != -1)
	{
		content.replace(pos, cmp.size(), sub);
		pos += sub.size();
	}
	outputFile << content;
}

int main(int argc, char **argv){
	size_t count = 0;
	std::string file_name = argv[1];
	if (argc != 4)
	{
		std::cout<<"Invalid input, it has to be filename s1 s2"<<std::endl;
		return (1);
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cout<<"Error opening file "<<argv[1]<<std::endl;
		return (1);
	}
	std::ofstream outputFile(file_name + ".replace");
	if (!outputFile.is_open())
	{
		std::cout<<"Error opening file "<<argv[1]<<std::endl;
		return (1);
	}
	write_to_file(outputFile, inputFile, argv[2], argv[3]);
}