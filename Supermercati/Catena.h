#ifndef CATENA_H
#define CATENA_H

#include "Supermercato.h"

class Catena
{
	private:
		Supermercato vettSuper[DIM];
		int nSuper;
	public:
		Catena();
		~Catena();
		void Visualizza();
		void Ricerca (string rep);
	protected:
};

#endif
