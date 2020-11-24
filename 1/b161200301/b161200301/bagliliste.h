#pragma once
#include"Dugum.h"
template<typename T>
class bagliListe
{
private:Dugum<T> *ilk;
public:bagliListe()
{
	ilk = NULL;
}
public: void Ekle(T eleman)/////1. men�
{
	Dugum<T>*eklenecek = new Dugum<T>(eleman);
	if (ilk == NULL)
	{
		ilk = eklenecek;

	}
	else
	{
		Dugum<T>*son = ilk;
		while (son->sonraki != NULL) 
			son = son->sonraki;
		son->sonraki = eklenecek;
	}		
}
public: void Degistir()/////2.men�
{
	ilk = NULL;
}
public: int KarakterSay()/////3.men�
{
	int uzunluk = -1;
	Dugum<T> *son = ilk;
	while (son != NULL)
	{
		uzunluk++;
		son = son->sonraki;
	}
	return uzunluk;
}
public:void Tersi()/////4.men�
{
	Dugum<T>*gecici;
	Dugum<T>*onceki = NULL;
	Dugum<T>*tut = ilk;
	while (tut != NULL)
	{
		gecici = tut->sonraki;
		tut->sonraki = onceki;
		onceki = tut;
		tut = gecici;
	}
	ilk = onceki;
}
public: T DegerAra(char harf)/////5.men�
{
	int yer = 0;
	Dugum<T>*gecici = ilk;
	if (gecici != NULL)
	{
		while (yer!=harf)
		{
			yer++;
			gecici = gecici->sonraki;
		}
	return gecici->bilgi;
	}	
}
public:void BasaEkle( T gecici)/////6.men�
{
	Dugum<T>*son = ilk;
	ilk->bilgi = gecici;
	ilk->sonraki = son;
	cout << "Ekleme ba�ar�l�.." << endl;	
}
public:void Yazdir()/////9.men�
{
	if(ilk != NULL)
	{
	Dugum<T>*tut = ilk;
	while (tut->sonraki != NULL)
	  {
		cout << tut->bilgi;
		tut = tut->sonraki;
	  }
	}
	else
	{
		cout << endl << "Listede eleman yok.";
	}
 }
};
