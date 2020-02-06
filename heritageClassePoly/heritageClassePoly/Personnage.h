#pragma once
#include <iostream>
#include <string>
using namespace std;

class Personnage
{
public:
	Personnage();
	Personnage(const string& nom, int vie);
	void RecevoirDegats(int degats);
	void CoupDePoing(Personnage& cible);

	void SePresenter() const;

protected:
	int m_vie;
	string m_nom;
};

