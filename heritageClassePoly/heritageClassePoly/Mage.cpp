#include "Mage.h"

Mage::Mage(const string & nom, int vie):
	Personnage(nom,vie), m_mana(100)
{
}

void Mage::BouleDeFeu(Personnage& cible) const
{
	cible.RecevoirDegats(50);
}

void Mage::BouleDeGlace(Personnage& cible) const
{
	cible.RecevoirDegats(40);
}
