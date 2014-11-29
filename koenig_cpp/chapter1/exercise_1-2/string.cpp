#include<iostream>
#include<string.h>

//Exercise 1-2. Are the following definitions valid? Why or why not?
//const std::string exclam = "!";
//const std::string message = "Hello" + ", world" + exclam;
//

//Answer: First one is valid, Second one is NOT because of two "const chars "
//cannot be valid operators for +



using namespace std;

int main(void){
	const std::string exclam = "!";
	const std::string message = "Hello" + ", world" + exclam;

	return 0;
}
