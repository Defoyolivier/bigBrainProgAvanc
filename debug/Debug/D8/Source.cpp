#include <iostream>
#include "ClassA.h"

using namespace std;

int main()
{
	ClassA c;

	cout << c.Add(10, 10) << endl;
	cout << c.Sub(20, 10) << endl;
	cout << c.Mul(10, 2) << endl;
	
	return 0;
}