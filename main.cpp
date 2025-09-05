#include <iostream>
#include <string>

// Task 1:
// -Create a Warrior class/struct that contains a health value
// -Create a function that changes the warriors's health. What happens when its by-value vs by-reference?

// Task 2:
// -Modify your Warrior class/struct to have a name field
// -Make an array of 5 warriors each with unique names and output their name and health to the console using a for-loop!

void IncrementByValue(int health)
{
	health++;
}

void IncrementByReference(int& health)
{
	health++;
}


struct Character
{
	int attack;
	int defense;
	float speed;
	float critChance;
};

struct Warrior
{
	int health;
	std::string name;
};

int main()
{
	Warrior hayden;
	hayden.health = 99;
	hayden.name = "Hayden";
	
	IncrementByValue(hayden.health);
	IncrementByReference(hayden.health);

	//std::string firstName = "Connor";
	//std::string lastName = "Smiley";
	//std::cout << "First name: " << firstName << " last name: " << lastName << std::endl;
	return 0;
}

// Example 1 -- if-else statements
/*
int requiredHealth = 50;
int warriorHealth = 49;
if (warriorHealth > requiredHealth)
{
	std::cout << "Ready for battle!" << std::endl;
}
else
{
	std::cout << "You must rest..." << std::endl;
}
*/

// Example 2 -- functions, arrays, and loops
/*
bool CheckHealth(int health, int requiredHealth)
{
	return health >= requiredHealth;
}

const int warriorCount = 5;
int warriorHealths[warriorCount];
warriorHealths[0] = 20;
warriorHealths[1] = 40;
warriorHealths[2] = 60;
warriorHealths[3] = 80;
warriorHealths[4] = 100;
int requiredHealth = 50;

for (int i = 0; i < warriorCount; i++)
{
	int warriorHealth = warriorHealths[i];
	bool canFight = CheckHealth(warriorHealth, requiredHealth);
	if (canFight)
	{
		std::cout << "Ready for battle!" << std::endl;
	}
	else
	{
		std::cout << "You must rest..." << std::endl;
	}
}
*/

// Example 3 -- values vs references
/*
// "Take in a copy of n"
void IncrementByValue(int n)
{
	n++;
}

// "Take in the actual variable n"
void IncrementByReference(int& n)
{
	n++;
}
int x = 2;
IncrementByValue(x);
int y = x;
IncrementByReference(x);
int z = x;
// y = 2, z = 3
*/

// Example 4 -- Objects
// You can create a custom data-type using the "class" and/or "struct" keyword.
// Unlike C#, classes & structs are identical in c++.
/*
struct Character
{
	int attack;
	int defense;
	float speed;
	float critChance;
};
Character connor;
connor.attack = 32458649;
connor.defense = -50;
connor.speed = 420.0f;
connor.critChance = 100.0f;
*/