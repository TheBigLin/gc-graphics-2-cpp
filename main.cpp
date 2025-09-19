#include <iostream>
#include <string>
#include <vector>

void Example1();

int main()
{
	std::vector<int> numbers;
	numbers.resize(10);

	return 0;
}


void Example1()
{
	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	//numbers.pop_back();
	//numbers.pop_back();
	//numbers.pop_back();
}