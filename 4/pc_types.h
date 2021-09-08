#include <iostream>
#include <string>
#include <list>
using namespace std;

//COMPUTER TYPES

class CARRO{
public:
	float cilindraje, potencia, combustible;
	string marca, modelo;
};

class Berlina: public CARRO{
};

class Coupe: public CARRO{
};

class Monovolumen: public CARRO{
};




