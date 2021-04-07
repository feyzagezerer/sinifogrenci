#include "Yonetim.hpp"

using namespace std;

int main()
{
	Yonetim<int> *yonetim = new Yonetim<int>();
	int secim;
	cout<< "1. Sinif Degistir\n 2.Ogrenci Degistir \n 3. Cikis";
	cin>> secim;
	switch(secim)
	{
		case 1:
		break;
		
		case 2:
		break;
		
		case 3:
		break;
				
		default:
			cout<< "Hatali secim.";
			cin.get();
			cin.ignore();
			break;
	}
	return 0;
}