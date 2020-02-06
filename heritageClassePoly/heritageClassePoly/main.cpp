#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"

using namespace std;

int main() 
{
	Personnage monPersonnage("marcel", 500);
	Guerrier monGuerrier("Bobinette", 400);

	monPersonnage->SePresenter();
	monGuerrier->SePresenter();

	system("pause");
	return 0;

}