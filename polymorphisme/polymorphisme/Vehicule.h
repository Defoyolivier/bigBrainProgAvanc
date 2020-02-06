#pragma once
#include <iostream>
using namespace std;

class Vehicule
{
public:
	Vehicule();
	Vehicule(int prix);

	virtual void Affiche() const;
protected:
	int m_prix;
};

