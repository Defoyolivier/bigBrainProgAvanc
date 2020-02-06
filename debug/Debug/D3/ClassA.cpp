#include "ClassA.h"
#include <iostream>
using namespace std;

ClassA::ClassA(const int val1, const int val2, const int val3)
	: m_val1(val1), m_val2(val2), m_val3(val3)
{
}

void ClassA::Afficher() const
{
	cout << m_val1 << ", " << m_val2 << ", " << m_val3 << endl;
}
