#include "Reparto.h"

Reparto::Reparto()
{
	nome = "####";
	incasso = 0;
}

Reparto::~Reparto()
{
}
float Reparto::getIncasso()
{
	return incasso;
}

string Reparto::getNome()
{
	return nome;
}
