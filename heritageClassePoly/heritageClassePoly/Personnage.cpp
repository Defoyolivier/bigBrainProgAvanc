#include "Personnage.h"



Personnage::Personnage() : m_vie(100), m_nom("Bob")
{
}

Personnage::Personnage(const string & nom, int vie):
	m_nom(nom), m_vie(vie)
{
}

void Personnage::RecevoirDegats(int degats)
{
	m_vie -= degats;
}

void Personnage::CoupDePoing(Personnage & cible)
{
	cible.RecevoirDegats(10);
}

void Personnage::SePresenter() const
{
	cout << "Bonjour, je m'appelle " << m_nom << "." << endl;
	cout << "J'ai encore " << m_vie << " point de vie." << endl;

}

