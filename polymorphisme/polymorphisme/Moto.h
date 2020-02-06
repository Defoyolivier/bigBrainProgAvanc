#pragma once
#include "Vehicule.h"
class Moto : public Vehicule
{
public:
	virtual void Affiche() const;

private:
	double m_vitesse;
};

