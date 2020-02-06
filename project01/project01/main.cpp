#include <iostream>
#include "Goblin.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() 
{
	srand(time(NULL));

	int min = 1;
	int max = 20;

	int valeur = 0;
	for (int i = 0; i < 10; i++)
	{
		valeur = min + (rand() % (max - min + 1));
		
		cout << valeur << endl;
	}

	Goblin goblin("Prad Bitt", 10);
	goblin.ChangerArme("Epee rouille", 2);
	system("pause");
	return 0;
	
}