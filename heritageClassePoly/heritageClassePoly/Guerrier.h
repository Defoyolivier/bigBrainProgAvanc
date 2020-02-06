#pragma once
#include <iostream>
#include <string>
#include "Personnage.h"
using namespace std;

class Guerrier : public Personnage
{
	Guerrier();
	Guerrier(const string& nom, int vie);
public:
	void FrapperMarteau(Personnage& cible) const;
	void SePresenter();

private:

};

