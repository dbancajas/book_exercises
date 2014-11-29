#include <iostream>
#include <string>

//Exercise 1-6. What does the following program do if, when it asks you for
//input, you type two names (for example, Samuel Beckett)? Predict the behavior
//before running the program, then try it.

//Answer: If you type two names, it will not ask you again for the second name.
//It will use the 2nd name as the 2nd input.

int main()
{
	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name
		<< std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name
		<< "; nice to meet you too!" << std::endl;
	return 0;
}
