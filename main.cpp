#include "functions.h"
#include <iostream>

int main()
{
	//TODO: if you want to test your functions, write your code here
	using std::cout;
	cout << "Greetings, user! Enter 3 real-numers and I'm will find a smallest among them:\n";
	float a, b, c;
	std::cin >> a >> b >> c;
	cout << "Okay, and this number...\t"
		<< findMinValue(a, b, c) << std::endl;
	cout << "Thank for using. Bye!\n";
	system("pause");
	return 0;
}
