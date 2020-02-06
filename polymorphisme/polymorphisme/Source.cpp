#include <iostream>
#include "Vehicule.h"
#include "Moto.h"
using namespace std;

void Afficher(Vehicule& v) {
	v.Affiche();
}

int main() {

	Vehicule v;
	Afficher(v);

	Moto m;
	Afficher(m);
	

	system("pause");
	return 0;
}