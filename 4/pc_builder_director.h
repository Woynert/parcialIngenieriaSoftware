using namespace std;

//prefixes
enum carro_types{
	TIPO_MODELO_BAJO,
	TIPO_MODELO_ALTO,
};

//director
class DIRECTOR{
private:
	CARRO_BUILDER* builder;

public:

	//constructor
	DIRECTOR(CARRO_BUILDER* builder){
		this->change_builder(builder);
	}

	//replace pc builder
	void change_builder(CARRO_BUILDER* builder){
		this->builder = builder;
	}

	//make specific pc
	void make(int type){
		builder->reset();
		//type
		switch(type){
			case TIPO_MODELO_BAJO:
				builder->set_cilindraje(100);
				builder->set_potencia(50);
				builder->set_combustible(2000);
				builder->set_marca();
				builder->set_modelo("Modelo bajo");
				break;

			case TIPO_MODELO_ALTO:
				builder->set_cilindraje(200);
				builder->set_potencia(100);
				builder->set_combustible(5000);
				builder->set_marca();
				builder->set_modelo("Modelo alto");
				break;
		}
	}
};
