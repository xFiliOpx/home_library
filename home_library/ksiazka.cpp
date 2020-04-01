#include "ksiazka.h"

void ksiazka::dodajDane() {
	std::cout << "autor: ";
	std::cin >> autor;
	std::cout << "tytul: ";
	std::cin >> tytul;
	std::cout << "rodzaj: ";
	std::cin >> rodzaj;
	std::cout << "miejcse: ";
	std::cin >> miejcse;
	std::cout << "kolorOk: ";
	std::cin >> kolorOk;
	std::cout << "nip: ";
	std::cin >> nip;
}