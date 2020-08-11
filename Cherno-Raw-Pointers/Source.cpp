

/*computers deal with memory. Memory is everything. For eksampel,
When you create a variable, when you load in data from disk,
everything in you do in a program gets stored in memory.

pointers manipulate memory. 
A pointer is an integer wich stores a memory adress. 

Your memory on your computer is like one big line of numbers.
ever number on that line has an adress. Every number on that line 
is one bite. A pointer stores the adress of any given number on 
the memory line. */


#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{

	//void* ptr = 0; // void(exected type) *(pointer) ptr(name of pointer)
	// setting a pointer to zero makes it invalid.

	int var{ 8 };

	void* ptr = &var; // & get the memory adress of var. It is then stored in ptr
	std::cin.get();
	return 0;
}