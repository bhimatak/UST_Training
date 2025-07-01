#include <iostream>
#include "mylib/utils.h"

using namespace std;


int main()
{
	cout << "Running tests....." << endl;


	if (add(2, 3) != 5)
	{
		cerr << "[FAIL] add(2,3) != 5 \n";
		return 1;
	}

	if (add(-1, 1) != 0)
	{
		cerr << "[FAIL] add(-1,1) != 0 \n";
		return 1;
	}

	cout << "[PASS] All tests passed...." << endl;
	return 0;

	
}