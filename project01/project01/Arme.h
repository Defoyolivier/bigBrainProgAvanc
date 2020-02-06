#pragma once
#include <iostream>
#include <string>
using namespace std;
class Arme
{
public:
	Arme();
	Arme(const string& nom, int degats);

	~Arme();

	void Changer(const string& nom, int degats);
	void Afficher() const;

	inline int GetDegats() const { return m_degats; }

private:
	string m_nom;
	int m_degats;
};

