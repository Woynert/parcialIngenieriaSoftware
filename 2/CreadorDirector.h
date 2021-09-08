#include "CreadorPersonaje.h"
using namespace std;

//Director
class CreadorDirector{
public:
	CreadorPersonaje* creador;

	//crear
	Personaje* crear(string nombre, string imagen, float altura, float peso, float inteligencia, string habilidad){
		Personaje* nuevo = this->creador->crear();

		nuevo->nombre = nombre;
		nuevo->imagen = imagen;
		nuevo->altura = altura;
		nuevo->peso   = peso;
		nuevo->inteligencia = inteligencia;
		nuevo->habilidad    = habilidad;

		return nuevo;
	}
};
