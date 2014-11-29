#include <string>
#include <iostream>

//Exercise 1-5. Is this program valid? If so, what does it do? If not, say why
//not, and rewrite it to be valid.


//Answer: No. It's because x is out of scope. The third to the last } should be
//after the last cout statement

int main()
{
	{ std::string s = " a string";
	 { std::string x = s + ", really";
	   std::cout << s << std::endl; 
	 }
	std::cout << x << std::endl;
	}
	return 0;
}
