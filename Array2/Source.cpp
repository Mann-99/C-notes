#include <iostream>
using namespace std;

int main() {

	int MyintArray[10];

	for (int i = 0; i < 10; i++) {

		MyintArray[i] = i;
		cout << MyintArray[i] << endl;
	}

	int MyArray2[5] = { 1 , 23, 5 ,4, 9 }; //initialize custom Array
	cout << "MyArray2[0] =" << MyArray2[0] << endl;
	cout << "The first element in my array is:" << MyintArray[0] << endl;
	system("pause");

	//for loop method
	for (int i = 0; i < 5; i++) {
		cout << "Myarray[" << i << "] = " << MyintArray[i];

	}
}