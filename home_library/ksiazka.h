#pragma once
#include <iostream>

class ksiazka {

public:

	std::string autor;
	std::string tytul;
	std::string rodzaj;
	std::string miejcse; //gdzie jest na polce/ ktorej
	std::string kolorOk; //kolor okladki
	std::string nip; //kod ksiazki

	void dodajDane();
	void zmienDane();
};

