#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <algorithm>
#include <string>
'run="echo hello word"'

using namespace std;


class Tagliatelle{
	public:
	Tagliatelle(double dlugosc,double szerokosc,double proporcje):L(dlugosc),W(szerokosc),R(proporcje){}
	Tagliatelle():L(0.5),W(0.5),R(0.5){}
	double ileMaki(unsigned P)const{return P*L*W*(1.-R)*C;}
	private:
	double L;
	double W;
	double R;
	static const double C;
};

int main(){}