#include <iostream>
#include "CreadorDirector.h"
#include "RegistroPersonaje.h"
using namespace std;

//opciones
enum{
	CREAR = 1,
	SELECCIONAR = 2,
	SALIR = 3
};

//tipos
enum{
	PRINCIPE = 1,
	HEROE = 2,
	VILLANO = 3,
	MONSTRUO = 4
};

int main(){

	Personaje* pnj;

	//registro
	RegistroPersonaje registro;

	//director
	CreadorDirector director;

	/*/crear principe
	CreadorPrincipe cPrincipe = new CreadorPrincipe();
	CreadorHeroe    cPrincipe = new CreadorPrincipe();
	CreadorVillano  cPrincipe = new CreadorPrincipe();
	CreadorMonstruo cPrincipe = new CreadorPrincipe();*/

	//opciones
	int option;
	int    tipo;
	string nombre;
	float  altura;
	float  peso;
	float  inteligencia;
	string habilidad;

	do{
		//input
		cout << "MENU \n1. Crear personaje \n2. Seleccionar personaje\n3. Salir" << endl;
		cin >> option;

		switch(option){
			case CREAR:
				cout << "\n1.Principe \n2.Heroe \n3.Villano \n4.Monstruo \nTipo:";
				cin >> tipo;

				cout << "\nNombre:";
				cin >> nombre;

				cout << "\nAltura:";
				cin >> altura;

				cout << "\nPeso:";
				cin >> peso;

				cout << "\nInteligencia";
				cin >> inteligencia;

				cout << "\nHabilidad";
				cin >> habilidad;

				//elegir tipo
				switch(tipo){
					case PRINCIPE:
						director.creador = new CreadorPrincipe();
						break;
					case HEROE:
						director.creador = new CreadorHeroe();
						break;
					case VILLANO:
						director.creador = new CreadorVillano();
						break;
					case MONSTRUO:
						director.creador = new CreadorMonstruo();
						break;
				}

				//crear personaje
				pnj = director.crear( nombre, "IMAGEN", altura, peso, inteligencia, habilidad);

				//agregar al registro
				registro.addItem(pnj);

				break;
			case SELECCIONAR:
				registro.printList();
		}
	}
	while(option != SALIR);


	return 0;
}

void test(){
	Personaje* pnj;

	//registro
	RegistroPersonaje registro;

	//director
	CreadorDirector director;

	//crear principe
	director.creador = new CreadorPrincipe();
	pnj = director.crear("Juan", "Imagen", 10.2, 10.0, 10.0, "Correr");

	registro.addItem(pnj); //agregar registro

	//crear villano
	director.creador = new CreadorVillano();
	pnj = director.crear("Bowser", "Imagen", 20.0, 50.0, 10.0, "Escupir fuego");

	registro.addItem(pnj); //agregar registro

	//list
	registro.printList();
}

//string nombre, string imagen, float altura, float peso, float inteligencia, string habilidad
