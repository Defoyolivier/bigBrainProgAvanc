#pragma once
#include "Vehicule.h"
class Voiture : public Vehicule
{
public:
	virtual void Afficher() const;

private:
	int m_portes;
};

