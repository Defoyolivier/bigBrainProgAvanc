#include <iostream>
#include "ClassA.h"
using namespace std;

int main()
{
	ClassA* pA1 = new ClassA(10);
	ClassA* pA2 = nullptr;

	pA1->Afficher();
	pA1->Assigner(10);
	pA1->Obtenir();
	pA2->Afficher();
	pA2->Assigner(20);
	pA2->Obtenir();

	return 0;
}
