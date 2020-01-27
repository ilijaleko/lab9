#include "DevizniRacun.hpp"
#include <iostream>

//Static varijabla
double DevizniRacun::tecaj = 0;

//Konstruktori
DevizniRacun::DevizniRacun(double stanje, std::string valuta) : Racun(stanje, valuta){}

//Metode
void DevizniRacun::kupi(double iznos) {
	stanje = stanje + (iznos / tecaj);
	popisTransakcija.push_back(iznos/tecaj);
	brojTransakcija++;
}
void DevizniRacun::setTecaj(double tecaj) {
	this->tecaj = tecaj;
	std::cout << "Promjena tecaja. Sada je: " << tecaj << std::endl;
}