#include <iostream>
#include <list>
using namespace std;

//Almacenar y acceder personajes
class RegistroPersonaje{
private:
	list<Personaje*> lsPnj;

public:

	//add new Personaje
	void addItem(Personaje* newPnj){
		this->lsPnj.push_back( newPnj );
	}

	//get clone of existing Personaje
	Personaje* getPersonajeByName(string nombre){

		//iterar
		list<Personaje*>::iterator it;
		for (it = this->lsPnj.begin(); it != this->lsPnj.end(); it++){

			//check name
			if ((*it)->nombre == nombre){
				return (*it)->clonar();
			}
    	}
	}

	//show a list
	void printList(){
		int indice = 1;

		//iterar
		list<Personaje*>::iterator it;
		for (it = this->lsPnj.begin(); it != this->lsPnj.end(); it++, indice++){

			cout << indice << ". " << (*it)->nombre << ", Habilidad: " << (*it)->habilidad << endl;
    	}
	}
};
