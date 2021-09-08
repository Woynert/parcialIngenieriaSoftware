#include <string>
using namespace std;

//generic Personaje
class Personaje{
public:
	string nombre;
	string imagen;
	float altura;
	float peso;
	float inteligencia;
	string habilidad;

	//clonar
	Personaje* clonar(){
		Personaje* clon = new Personaje();

		//atributos
		clon->nombre = this->nombre;
		clon->imagen = this->imagen;
		clon->altura = this->altura;
		clon->peso   = this->peso;
		clon->inteligencia = this->inteligencia;
		clon->habilidad    = this->habilidad;

		return clon;
	}
};

//clases
class Principe: public Personaje{
};

class Heroe: public Personaje{
};

class Villano: public Personaje{
};

class Monstruo: public Personaje{
};
