#include "Goblin.h"
#include <iostream>


Goblin::Goblin() : m_vie(10), m_maxVie(10), m_nom("Unknow")
{
	cout << "Constructeur par default" << endl;
}

Goblin::Goblin(const string & nom, int vie) : m_vie(vie), m_maxVie(vie), m_nom(nom)
{
	cout << "Constructeur avec params" << endl;
}

Goblin::Goblin(const Goblin &other) :
	m_vie(other.m_vie), m_maxVie(other.m_maxVie), m_nom(other.m_nom)
{
	cout << "Constructeur par copie" << endl;
}



Goblin::~Goblin()
{
	cout << "Destructeur" << endl;
}


void Goblin::RecevoirDegat(int degats)
{
	m_vie -= degats;
	if (m_vie < 0) 
	{
		m_vie = 0;
	}
}

bool Goblin::EstMort() const
{
	return (m_vie <= 0) ? true : false;
	//return m_vie <= 0;
	/*if (m_vie <= 0)
	{
		return true;
	}
	else 
	{
		return false;
	}*/
}

void Goblin::AfficherInfo() const
{
	cout << "Gobelin: " << m_nom << ", " << m_vie << "/" << m_maxVie << endl;
}

void Goblin::ChangerArme(const string & nom, int degats)
{
	m_arme.Changer(nom, degats);
}

void Goblin::Attaque(Goblin autre)
{
	int degats = m_arme.GetDegats();
	autre.RecevoirDegat(degats);
}
