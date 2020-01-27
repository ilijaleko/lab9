#include "Racun.hpp"
#include <iostream>

//Static varijabla
int Racun::brojTransakcija = 0;

//Konstruktori
Racun::Racun() :stanje(0), valuta("KN"){}
Racun::Racun(double stanje) : stanje(stanje), valuta("KN"){}
Racun::Racun(double stanje, std::string valuta) : stanje(stanje), valuta(valuta){}

//Metode
double Racun::dohvatiStanje() {
	return stanje;
}
std::string Racun::dohvatiStanjeTekst() {
	return std::to_string(stanje) + valuta;
}
void Racun::transakcije() {
	for (auto transakcija : popisTransakcija) {
		std::cout << transakcija << std::endl;
	}
}