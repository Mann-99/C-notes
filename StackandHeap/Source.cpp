#include <iostream>
#include <string>
using namespace std;

struct Character {
	Character();

	void PrintHealth();

	string Name;
	float Health;

};

Character::Character() {
	Name = "Default Name";
	Health = 100.f;
}

void Character::PrintHealth() {
	cout << "Health =" << Health << endl;
}

int main()
{
	for (int i = 0; i < 100000; i++) {
		Character* PtrToChar = new Character();

		PtrToChar->Name = "Ninja";

		cout << PtrToChar->Name << endl;

		PtrToChar->PrintHealth();

		delete PtrToChar;
	}





	system("pause");
}