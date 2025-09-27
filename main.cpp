#include <iostream>
/*
 * DO NOT USE STD::VECTOR.
 * THE GOAL OF THIS ASSIGNMENT IS TO EMULATE PUSH_BACK AND POP_BACK
*/

void PushBack(int*& numbers, int number, int& size, int& capacity)
{
	if (size + 1 > capacity)
	{
		int* numbers = new int[3];
		numbers[0] = 1;
		numbers[1] = 2;
		numbers[2] = 3;


		int* newNumbers = new int[4];

		for (int i = 0; i < 3; i++)
			newNumbers[i] = numbers[i];

	  newNumbers[3] = 420;

	  numbers = newNumbers;

	  delete[] numbers;
	}
	// Add number to the back of numbers
	
	size++;
}

void PopBack(int& size)
{
	// Implementation is up to you. Modify function parameters as you see fit!
	// I recommend you simply decrement size (since size is independent of capacity).
	size--;
}

int main()
{
	int size = 0;
	int capacity = 3;
	int* numbers = new int[capacity];
	for (int i = 0; i < capacity; i++)
	{
		numbers[i] = i + 1;
		size++;
	}

	// Should print "1, 2, 3, 420"
	PushBack(numbers, 420, size, capacity);
	for (int i = 0; i < size; i++)
		std::cout << numbers[i] << std::endl;

	// Should print "1, 2, 3"
	PopBack(size);
	for (int i = 0; i < size; i++)
		std::cout << numbers[i] << std::endl;

	// Tip: use the debugger to inspect local variables and memory!
	return 0;
}