#include "Vehicule.h"

Vehicule::Vehicule() : m_prix(0)
{
}

Vehicule::Vehicule(int prix) : m_prix(prix)
{
}

void Vehicule::Affiche() const
{
	cout << "Ceci est un vehicule" << endl;
}
