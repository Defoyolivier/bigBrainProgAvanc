#include <iostream>
#include "ClassA.h"
using namespace std;

int main()
{
	ClassA* ptr = new ClassA(10, 12, 14);
	delete(ptr);
	ptr = nullptr;
	ptr->Afficher();

	system("pause");
	return 0;
}