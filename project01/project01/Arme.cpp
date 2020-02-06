#include "Arme.h"



Arme::Arme()
{
}

Arme::Arme(const string & nom, int degats) : m_nom(nom), m_degats(degats)
{
}


Arme::~Arme()
{
}

void Arme::Changer(const string & nom, int degats) 
{
	m_nom = nom;
	m_degats = degats;
}

void Arme::Afficher() const
{
	cout << "Armes: " << m_nom << ", degats: " << m_degats << endl;
}
