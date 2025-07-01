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

	if (sub(1, 1) != 0)
	{
		cerr << "[FAIL] sub(-1,1) != 0 \n";
		return 1;
	}

	if (sub(10, -1) != 11)
	{
		cerr << "[FAIL] sub(10,-1) != 11 \n";
		return 1;
	}

	if (division(10, 5) != 2.0)
	{
		cerr << "[FAIL] division(10, 5) != 2.0 \n";
		return 1;
	}

	if (division(10, 0) != 1)
	{
		cerr << "[FAIL] division(10, 0) != 0.0 \n";
		return 1;
	}

	cout << "[PASS] All tests passed...." << endl;
	return 0;

	
}