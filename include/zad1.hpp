#include "catch.hpp"
#inlcude <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

class Tagliatelle
{
	public:
	Tagliatelle():L(0.5),W(0.5),R(0.5){}
	Tagliatelle(double dlugosc, double szerokosc, double proporcje):L(dlugosc),W(szerokosc),R(proporcje){}

	double ileMaki(unsigned P)const{return P*L*W*(1.-R)*C;}
	

	private:
	double L;
	double W;
	double R;
	static const double C;
};



