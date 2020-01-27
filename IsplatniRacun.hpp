#pragma once
#include "Racun.hpp"

class IsplatniRacun : public Racun {
public:
	//Konstrkutori
	IsplatniRacun(double stanje);
	//Metode
	bool isplati(double iznos);
};