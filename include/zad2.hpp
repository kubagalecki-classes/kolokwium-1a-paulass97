#include "zad1.hpp"
#include <memory>
#include <string>
#include <type_traits>

 
 Dodaj do klasy Makaron publiczną statyczną metodę gotujMakaron, która:
•	przyjmuje przez stałą referencję jeden argument typu std::string
•	zwraca wskaźnik do obiektu typu Makaron
•	jeżeli pierwszy i ostatni znak argumentu są takie same, dynamicznie alokuje pod zwracanym adresem obiekt typu Tagliatelle z polami o wartościach L == 3.14, W == 0.42, R == 0.1
•	jeżeli pierwszy i ostatni znak argumentu są inne, dynamicznie alokuje pod zwracanym adresem obiekt typu Penne (użyj wygenerowanego przez kompilator konstruktora domyślnego).
Na koniec dokonaj modyfikacji klasy Makaron potrzebnej do poprawnego usuwania obiektów klas Tagliatelle i Penne przez wskaźnik na obiekt Makaron.
Podpowiedź: Klasa std::string posiada metody front i back, służące do dostępu do odpowiednio pierwszego i ostatniego znaku.

class Makaron{
	public:
	virtual double ileMaki(unsigned)const=0;
	static void gotujMakaron(const string& ){}

	private:
};

class Penne:public Makaron{
	public:
	double ileMaki(double& P)const{return P*L*W*(1.-R)*C;}

	private:
};