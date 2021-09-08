//#include <iostream>
#include "pc_types.h"
#include "pc_builders.h"
#include "pc_builder_director.h"

using namespace std;

int main(){

	//define builder
	BERLINA_BUILDER* berlinaBuilder = new BERLINA_BUILDER();
	COUPE_BUILDER* coupeBuilder = new COUPE_BUILDER();

	//create berlina
	DIRECTOR director = *(new DIRECTOR(berlinaBuilder));
	director.make(TIPO_MODELO_ALTO);

	//create coupe
//	DIRECTOR director = *(new DIRECTOR(berlinaBuilder));
	director.change_builder(coupeBuilder);
	director.make(TIPO_MODELO_BAJO);


	return 0;
}
