#include<iostream>

//Exercise 1-3. Is the following program valid? If so, what does it do? If not, why not?


//Answer: Yes. This is valid, each string variable is limited in it's context


int main()
{
	{ 
		const std::string s = "a string";
		std::cout << s << std::endl; 
	}
	{ const std::string s = "another string";
		std::cout << s << std::endl; }
	return 0;
}
