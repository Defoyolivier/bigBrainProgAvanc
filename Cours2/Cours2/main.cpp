#include <iostream>


void Add(int* a, int b, int c)
{
	*a = b + c;
	std::cout << *a << std::endl;
}

int main()
{
	//int varA = 20;
	//int &ref = varA;

	//std::cout << varA << std::endl;
	//std::cout << ref << std::endl;

	int* varC = nullptr; // null, 0

	int varB = 1234;
	int* ptr = &varB;

	//std::cout << "adresse de varB " << &varB << std::endl;
	//std::cout << "pointeur: " << ptr << std::endl; //un pointeur est une variables qui contient l'adresse d'une autre variable 

	int a = 0;
	int b = 10;
	int c = 20;

	int* ptrA = &a;

	Add(ptrA, b, c);
	std::cout << a << std::endl;

	/*std::cout << "char = " << sizeof(char) << std::endl;
	std::cout << "short = " << sizeof(short) << std::endl;
	std::cout << "int = " << sizeof(int) << std::endl;
	std::cout << "long = " << sizeof(long) << std::endl;
	std::cout << "float = " << sizeof(float) << std::endl;
	std::cout << "double = " << sizeof(double) << std::endl;
	std::cout << "bool = " << sizeof(bool) << std::endl;*/

	int aa = 5;
	int bb = 2;
	int cc = 17;

	int* p = &aa;

	//std::cout << *p << std::endl;

	p = &cc;

	//std::cout << *p << std::endl;

	system("pause");
}