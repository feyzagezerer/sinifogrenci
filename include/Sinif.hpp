#ifndef SINIF_HPP
#define SINIF_HPP
#include "Ogrenci.hpp"
#include <iostream>
using namespace std;
class Sinif{

	public:
	char **ogrenciler[30];
	char *ogrenci[30];
	Ogrenci ogrencil =new Ogrenci;
	ogrenci[30]=&ogrencil;
	ogrencil[0]= new Ogrenci[0];
	

};


#endif