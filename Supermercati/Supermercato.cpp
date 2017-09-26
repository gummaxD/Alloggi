#include "Supermercato.h"
#include "Reparto.h"


Supermercato::Supermercato()
{
	nRepart = 0;
}

Supermercato::~Supermercato()
{
}

float Supermercato::StampaIncassoTot()
{
	float inca=0;
	for (int i = 0 ; i < nRepart ; i++)
	{
		inca =inca + vettRep[i].getIncasso();	
	}
	return inca;
}

/*/void Supermercato::Visualizza()
{
	for (int i =0; i < nRepart ; i++)
	{
		cout<<"Nome"<<nome<<endl;
		cout<<"Incasso"<<StampaIncassoTot<<endl;	
	}
}*/

string Supermercato::getNome()
{
	return nome;
}

float Supermercato::Ricerca(string r)
{
	for (int i=0; i <nRepart ; i++)
	{
		if (r == vettRep[i].getNome())
			return vettRep[i].getIncasso();
	}
}
