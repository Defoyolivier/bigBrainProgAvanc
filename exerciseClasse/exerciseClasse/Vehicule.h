#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicule
{
public:
	Vehicule();

	void AfficherAnneeFab() const;
	void NombreDeRoues();

protected:
	int m_nbRoues;
	string m_nom;
	int anneeFab;
};

