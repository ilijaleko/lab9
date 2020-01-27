#include "UplatniRacun.hpp"

//Metode
void UplatniRacun::uplati(double iznos) {
	stanje = stanje + iznos;
	popisTransakcija.push_back(iznos);
	brojTransakcija++;
}