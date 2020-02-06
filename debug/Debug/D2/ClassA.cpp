#include "ClassA.h"
#include <iostream>
using namespace std;

ClassA::ClassA(const int value) : m_value(value)
{
}

void ClassA::Afficher() const
{
	cout << "Afficher ClassA" << endl;
}

void ClassA::Assigner(const int val)
{
	cout << "Assigner()" << endl;
	m_value = val;
}

int ClassA::Obtenir() const
{
	cout << "Obtenir()" << endl;
	return m_value;
}
