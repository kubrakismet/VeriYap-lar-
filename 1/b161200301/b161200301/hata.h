#pragma once
#include<iostream>
using namespace std;
class Hata
{
private:int hataKodu;
public:Hata(int hataKodu)
{
	this->hataKodu = hataKodu;
}
public:void Mesaj()
{
	switch (hataKodu)
	{
	
	case 1:cout << "�lk �nce metin girmelisin" << endl; break;
	case 2:cout << "Aranan de�er bulunamad�" << endl; break;
	default:
		cout << "Bilinmeyen Hata";
		break;
	}
}
public:void Mesaj(int hataKodu)
{
	switch (hataKodu)
	{
	case 1:cout << "�lk �nce metin girmelisin" << endl; break;
	case 2:cout << "Aranan De�er bulunamad�" << endl; break;
	default:
		cout << "Bilinmeyen Hata";
		break;
	}
}
};