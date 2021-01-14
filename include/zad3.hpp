#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
Napisz szablon funkcji polejSosem, który:
•	sparametryzowany jest jednym typem
•	przyjmuje jako pierwszy argument stałą referencję do obiektu typu Tagliatelle
•	przyjmuje jako drugi argument stałą referencję do obiektu typu, którym jest sparametryzowany (obiekt ten reprezentuje sos)
•	zwraca obiekt typu std::size_t, będący wynikiem wywołania metody polej drugiego argumentu na pierwszym argumencie (załóż, że typ będący parametrem szablonu posiada taką metodę)

template <typename T>
void polejSosem(){}
