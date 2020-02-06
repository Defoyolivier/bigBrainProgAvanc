#pragma once
#include <iostream>
#include <string>
#include "Personnage.h"
using namespace std;

class Mage : public Personnage
{
public:
	Mage(const string& nom, int vie);
	void BouleDeFeu(Personnage& cible) const;
	void BouleDeGlace(Personnage& cible) const;
private:
	int m_mana;
};

