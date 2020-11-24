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
	
	case 1:cout << "Ýlk önce metin girmelisin" << endl; break;
	case 2:cout << "Aranan deðer bulunamadý" << endl; break;
	default:
		cout << "Bilinmeyen Hata";
		break;
	}
}
public:void Mesaj(int hataKodu)
{
	switch (hataKodu)
	{
	case 1:cout << "Ýlk önce metin girmelisin" << endl; break;
	case 2:cout << "Aranan Deðer bulunamadý" << endl; break;
	default:
		cout << "Bilinmeyen Hata";
		break;
	}
}
};