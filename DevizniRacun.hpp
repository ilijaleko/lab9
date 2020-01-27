#pragma once
#include "Racun.hpp"

class DevizniRacun : public Racun {
public:
	//Konstruktori
	DevizniRacun(double stanje, std::string valuta);
	//Static varijabla
	static double tecaj;
	//Metode
	void kupi(double iznos);
	void setTecaj(double tecaj);
};