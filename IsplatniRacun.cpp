#include "IsplatniRacun.hpp"

//Konstruktori
IsplatniRacun::IsplatniRacun(double stanje) : Racun(stanje){}

//Metode
bool IsplatniRacun::isplati(double iznos) {
	if (stanje >= iznos) {
		stanje = stanje - iznos;
		popisTransakcija.push_back(iznos);
		brojTransakcija++;
		return 1;
	}
	return 0;
}