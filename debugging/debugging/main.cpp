#include <iostream>
#include <assert.h>
using namespace std;

void Func2()
{
	cout << "inside Func2" << endl;
}

void Func1()
{
	Func2();
}

void Add(int* value, int n, int m)
{
	assert(value != nullptr);
	*value = n + m;
	Func1();
}

int main()
{
	int a, b, c;
	int* ptr = nullptr;
	a = 10;
	b = 20;

	cout << "Nombre: ";
	cin >> c;
	cout << endl;

	ptr = &a;
	*ptr = 10;
	ptr = &b;
	ptr = nullptr;

	Add(ptr, a, c);

	system("pause");
	return 0;
}