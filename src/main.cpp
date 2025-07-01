#include <iostream>
#include "mylib/utils.h"

using namespace std;

int Menu() {
	cout << "Press," << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Exit" << endl;
	cout << "Choice: ";
	int ch;
	cin >> ch;
	return ch;

}

int main()
{
	bool flag = false;
	cout << "Main App Started...." << endl;
	while (true)
	{
		switch (Menu())
		{
		case 1:
			cout << "add(3, 4): " << add(3, 4) << endl;
			break;
		case 2:
			cout << "sub(3, 4): " << sub(3, 4) << endl;
			break;
		case 3:
			cout << "mul(3, 4): " << mul(3, 4) << endl;
			break;
		case 4:
			cout << "division(3, 4): " << division(3, 4) << endl;
			break;
		case 5:
			cout << "Exiting...." << endl;
			flag = true;
			break;
		default:
			cout << "Wrong Choice" << endl;
		}
		if (flag == true)
			break;
	}
	return 0;
}