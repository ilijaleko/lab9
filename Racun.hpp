#pragma once
#include <string>
#include <vector>

class Racun {
public:
	//Konstruktori
	Racun();
	Racun(double stanje);
	Racun(double stanje, std::string valuta);

	//Static varijabla
	static int brojTransakcija;

	//Metode
	double dohvatiStanje();
	std::string dohvatiStanjeTekst();
	void transakcije();
protected:
	double stanje;
	std::string valuta;
	std::vector<double> popisTransakcija;
};