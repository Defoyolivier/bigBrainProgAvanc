#pragma once

#include <string>
#include "Arme.h"
using namespace std;
class Goblin
{
public:
	Goblin();
	Goblin(const string& nom, int vie);
	Goblin(const Goblin& other);
	~Goblin();
	
	inline int GetVie() const { return m_vie; }
	inline void SetVie(int vie) { m_vie = vie; };

	void RecevoirDegat(int degats);
	bool EstMort() const;
	void AfficherInfo() const;

	void ChangerArme(const string& nom, int degats);
	void Attaque(Goblin autre);

private:
	int m_vie;
	int m_maxVie;
	string m_nom;
	Arme m_arme;
};

