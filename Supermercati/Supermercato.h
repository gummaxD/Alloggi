#ifndef SUPERMERCATO_H
#define SUPERMERCATO_H
#define DIM 10

#include "Reparto.h"

class Supermercato
{
	private:
		Reparto vettRep[DIM];
		int nRepart;
		string nome;
	public:
		Supermercato();
		~Supermercato();
		void Carica();
		//void Visualizza();
		float StampaIncassoTot();
		float Ricerca (string r);
		
		string getNome();
};

#endif
