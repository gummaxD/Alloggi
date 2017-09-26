#include "Catena.h"
#include <iostream>
using namespace std;

Catena::Catena()
{
	nSuper = 0;
}

Catena::~Catena()
{
}

void Catena::Visualizza ()
{
	for (int i = 0; i<nSuper ; i++)
	{
		cout<<"Nome "<<vettSuper[i].getNome()<<endl;
		cout<<"Incasso"<<vettSuper[i].StampaIncassoTot()<<endl;
	}
}

void Catena::Ricerca(string rep)
{
	for (int i = 0; i<nSuper;i++)
	{
		cout<<vettSuper[i].Ricerca(rep);
	}
}

