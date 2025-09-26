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

	  delete[] numbers;

	  numbers = newNumbers;
		
	}
	// Add number to the back of numbers
}

void PopBack(int& size)
{
	
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

// Example2()
// }
//	std::vector<int> numbers;
//	numbers.push_back(1);
//	numbers.push_back(2);
//	numbers.push_back(3);


//	int front = numbers.front();
//	int back = numbers.back();

//	numbers.pop_back();
//	numbers.pop_back();
//	numbers.pop_back();


// extra comments to remember

// Resize increases both size and capacity
// Reserve only increases the capacity

// size = how many elements currently in the vector
// capacity = how many elements the vector has room for
// }
// Example4()
// {
//	std::vector<int> numbers;
//	for (int i = 0; i < 3000000; i++)
//			numbers,push_back(i);

//	for (int i = 0; i < 3000000; i++)
//			numbers,pop_back(i);
// }

//reallocation example
// Example5()
// {
//	int* numbers = new int[3];
//	numbers[0] = 1;
//	numbers[1] = 2;
//	numbers[2] = 3;

//	// *push_back(7) called*
//	// 1) allocate new memory to fit new data-size
//	   int* newNumbers = new int[4];

//	// 2) copy old data to new memory
//	for (int i = 0; i < 3; i++)
//		newNumbers[i] = numbers[i];

//	// 3) Add new data to new memory
//  newNumbers[3] = 7;

//  // 4) Delete old data once its been copied
//  delete[] numbers;

//  // 5) Update pointer to new memory
//  numbers = newNumbers;
// }