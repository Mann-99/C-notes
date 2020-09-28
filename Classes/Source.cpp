#include <iostream>
#include <string>
using namespace std;

class Dog {
public:



	Dog() {
		Bark();

		Name = "Default Name";
		Age = 10;
		health = 100.f;
	}

	string Name;
	int Age;
	float health;

	void Bark() {
		cout << "Woof!" << endl;
	}
};

int main(){

	Dog dog;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.health << endl;

	dog.Name = "sam";
	dog.Age = 14;
	dog.health = 100.0;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.health << endl;

	system("pause");
}

Dog::Dog()
{
	Bark();

	Name = "Default Name";
	Age = 10;
	health = 100.f;
}
