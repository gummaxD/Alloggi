#ifndef REPARTO_H
#define REPARTO_H

#include <string>
using namespace std;

class Reparto
{
	private :
		string nome;
		float incasso;
	public:
		Reparto();
		~Reparto();
		float getIncasso();
		string getNome();
	
};

#endif
