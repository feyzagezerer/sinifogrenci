#ifndef OGRENCI_HPP
#define OGRENCI_HPP
#include <iostream>
#include<fstream> //dosya okuma ve yazma kütüphanesi
using namespace std;
class Ogrenci{
	private:
	int sinifno1,sinifno2,sinifno3,sinifno4;
	char *ogrenciadi1=new char[30];
	Ogrenci **kisiler= new *Kisi[10];
	char ogrenciadi2[];
	char ogrenciadi3[];
	char ogrenciadi4[];

	ofstream dosyayaz;
	ifstream dosyaoku;
           dosyaoku.open("Okul.txt");

		  dosyaoku>> sinifno1;
	while(dosyaoku != "1" || dosyaoku !="2"||dosyaoku !="3"||dosyaoku !="4")
	{
		dosyaoku>> ogrenciadi1[];
		ogrenciadi1
	}
	dosyaoku>> sinifno2;
	while(dosyaoku != "1" || dosyaoku !="2"||dosyaoku !="3"||dosyaoku !="4")
	{
		dosyaoku>> ogrenciadi2[];
	}
dosyaoku>> sinifno3;
	while(dosyaoku != "1" || dosyaoku !="2"||dosyaoku !="3"||dosyaoku !="4")
	{
		dosyaoku>> ogrenciadi3[];
	}
	
	dosyaoku>> sinifno4;
	while(dosyaoku != "1" || dosyaoku !="2"||dosyaoku !="3"||dosyaoku !="4")
	{
		dosyaoku>> ogrenciadi4[];
	}
	
	dosyaoku.close();
	
	public:
	Ogrenci(string isim) {
	this->isim=isim;
	}
	string Isim()const{
	return isim; 
	}
};


#endif