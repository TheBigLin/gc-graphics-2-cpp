#include <iostream>
#include <string>

// 1, create a person object that stores a name and age.

// 2, Create an array of people. Ensure each person has a name and age.

// 3, Loop through people. Log the name and age of each person.


struct Person
{
	int age;
	std::string name;

};

int main()
{
	
	const int peopleCount = 3;
	Person people[peopleCount];
	people[0].name = "connor";
	people[0].age = 27;
	people[1].name = "Hayden";
	people[1].age = 19;
	people[2].name = "BigLin";
	people[2].age = 999;


	for (int i = 0; i < peopleCount; i++)
	{
		std::string name = people[i].name;
		int age = people[i].age;
		std::cout << "Name:" << people[i].name << " age:" << age << std::endl;
	}

	


	//std::array<Person, 3> persons;
	
	//Person person;
	//person.name = "Connor";
	//person.age = 27;
	//person.name = "Hayden";
	//person.age = 19;
	//person.name = "Lebron";
	//person.age = 40;
	//person.name = "BigLin";
	//person.age = 999;
	//person.name = "Person5";
	//person.age = 21;
	//const int count = 5;

	//Person 

	// make an array of people instead of numbers
	// int numbers [count];
	return 0;
}