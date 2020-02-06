#include <iostream>
using namespace std;

int* ObtenirUnPointeur()
{
	int localVariable = 10;
	return &localVariable;
}

int Addition(const int a, const int b)
{
	const int resultat = a + b;
	return resultat;
}

int main()
{
	int* ptr = nullptr;
	int varA = 0;
	
	ptr = ObtenirUnPointeur();
	varA = Addition(50, 30);
	
	cout << *ptr << ", " << varA << endl;
	system("pause");
	return 0;
}
