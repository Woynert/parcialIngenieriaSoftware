#include "Personaje.h"
using namespace std;



//Abstract CreadorPersonaje
class CreadorPersonaje{
public:
	virtual Personaje* crear() = 0;
};

//principe
class CreadorPrincipe: public CreadorPersonaje{
	Personaje* crear(){
		Personaje* nuevo = new Principe();
		return nuevo;
	}
};

//heroe
class CreadorHeroe: public CreadorPersonaje{
	Personaje* crear(){
		Personaje* nuevo = new Heroe();
		return nuevo;
	}
};

//villano
class CreadorVillano: public CreadorPersonaje{
	Personaje* crear(){
		Personaje* nuevo = new Villano();
		return nuevo;
	}
};

//monstruo
class CreadorMonstruo: public CreadorPersonaje{
	Personaje* crear(){
		Personaje* nuevo = new Monstruo();
		return nuevo;
	}
};


