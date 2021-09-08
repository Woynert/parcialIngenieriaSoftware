#include <string>
using namespace std;

//interface
//(c++ Abstract class)
class CARRO_BUILDER{
public:
	virtual void reset() = 0;
	virtual void set_cilindraje (float cil) = 0;
	virtual void set_potencia   (float pot) = 0;
	virtual void set_combustible(float com) = 0;
	virtual void set_marca      () = 0;
	virtual void set_modelo     (string mod) = 0;
};

//laptop
class BERLINA_BUILDER: public CARRO_BUILDER{
private:
Berlina* result;
public:

	//reset the product
	void reset() {result = new Berlina();}

	void set_cilindraje (float cil) {result->cilindraje = cil;}
	void set_potencia   (float pot) {result->potencia = pot;}
	void set_combustible(float com) {result->combustible = com;}
	void set_marca      () {result->marca = "BERLINA";}
	void set_modelo     (string mod) {result->modelo = mod;}

	Berlina* get_result() {return result;}
};

class COUPE_BUILDER: public CARRO_BUILDER{
private:
Coupe* result;
public:

	//reset the product
	void reset() {result = new Coupe();}

	void set_cilindraje (float cil) {result->cilindraje = cil;}
	void set_potencia   (float pot) {result->potencia = pot;}
	void set_combustible(float com) {result->combustible = com;}
	void set_marca      () {result->marca = "COUPE";}
	void set_modelo     (string mod) {result->modelo = mod;}

	Coupe* get_result() {return result;}
};

class MONOVOLUMEN_BUILDER: public CARRO_BUILDER{
private:
Monovolumen* result;
public:

	//reset the product
	void reset() {result = new Monovolumen();}

	void set_cilindraje (float cil) {result->cilindraje = cil;}
	void set_potencia   (float pot) {result->potencia = pot;}
	void set_combustible(float com) {result->combustible = com;}
	void set_marca      () {result->marca = "MONOVOLUMEN";}
	void set_modelo     (string mod) {result->modelo = mod;}

	Monovolumen* get_result() {return result;}
};
