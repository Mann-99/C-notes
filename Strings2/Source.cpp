#include <iostream>
#include <string>
//using namespace std;

int main() {
	std::string MyString;

	MyString = "My dog's name is:";
	std::string first = "Spot";
	std::string last = "Jones";

	MyString += (first + last);

	std::cout << MyString << std::endl;

	system("pause");
}