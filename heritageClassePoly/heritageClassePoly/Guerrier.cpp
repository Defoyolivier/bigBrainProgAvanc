#include "Guerrier.h"



Guerrier::Guerrier()
{
}

Guerrier::Guerrier(const string& nom, int vie) :
	Personnage(nom, vie)
{
}

void Guerrier::FrapperMarteau(Personnage & cible) const
{
	cible.RecevoirDegats(30);
}

void Guerrier::SePresenter()
{
	Personnage::SePresenter();
	cout << "Rwar" << endl;
}
