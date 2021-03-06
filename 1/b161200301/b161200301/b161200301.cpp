/***********************************************************
|				     SAKARYA ÜNİVERİSTESİ                  |
|		 BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ         |
|		  BİLİŞİM SİSTEMLERİ MÜHENDİSLİĞİ BÖLÜMÜ           |
|		            2017-2018 GÜZ DÖNEMİ                   |
|			        VERİ YAPILARI DERSİ                    |
|                                                          |
|				ÖDEV NUMARASI..........: 1                 |
|				ÖĞRENCİ ADI............: KÜBRA KISMET      |
|				ÖĞRENCİ NUMARASI.......: B161200301        |
|														   |
***********************************************************/

#include "stdafx.h"
#include <iostream>
#include<conio.h>
#include<string>
#include"bagliliste.h"
#include"hata.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	bagliListe<char> *Liste = new bagliListe<char>();	
	int secim;
	char harf;
	char eleman;
	do
	{
		system("cls");
		cout << "1-Metin ekle" << endl;
		cout << "2-Metinin değerini değiştir" << endl;//
		cout << "3-Metnin karakter sayısını göster" << endl;
		cout << "4-Metni tersine çevir" << endl;//
		cout << "5-Metinden değer aratma" << endl;//
		cout << "6-Metnin öncesine ekleme" << endl;
		cout << "7-Metnin sonrasına ekleme" << endl;//
		cout << "8-İsteilen karakterden sonra araya metin girme" << endl;//
		cout << "9-Metni görüntüle" << endl;
		cout << "10-Çıkış" << endl;
		cout << "Seçiminiz: "; cin >> secim;
		system("cls");
		
			switch (secim)
			{
			case 1:
				cout << "Eklenecek metni giriniz: ";
				do
				{
					eleman = _getche();
					Liste->Ekle(eleman);
				} 
				while (!(eleman == '\r'));//enter'a basana kadar döngü devam ediyor enter'a basınca döngüden çıkıyor.
				system("CLS");
				Liste->Yazdir();
				cout << endl;
				break;
			case 2: 
				Liste->Degistir();
				cout << "değiştirilecek metini girin: ";
				char eleman;
				do
				{
					eleman = _getche();
					Liste->Ekle(eleman);
				}
				while (!(eleman == '\r'));
				system("CLS");
				Liste->Yazdir();
				cout << endl;
				break;
			case 3:
				cout << "Karakter sayısı: " << Liste->KarakterSay() << endl;
				break;
			case 4:
				Liste->Tersi();
				system("CLS");
				Liste->Yazdir();
				cout << endl;
				break;
			case 5: 	
				cout << "Aramak istediğiniz harfi giriniz: ";
				cin>> harf;				
				cout<<Liste->DegerAra(harf)<<endl;
				break;
			case 6: 
				cout << "Eklenecek değer: ";
				do
				{
					eleman = _getche();
					Liste->BasaEkle(eleman);
				}
				while (!(eleman == '\r'));
				break;
			case 7:
				cout << "Eklenecek metni giriniz: "; 
				do
				{
				eleman = _getche();
				Liste->Ekle(eleman);
				} 
				while (!(eleman == '\r'));
				system("CLS");
				Liste->Yazdir();
				cout << endl;
				break;
			case 8:
				cout << "Hangi karakterden sonra metin eklemek istersiniz: ";
				cin >> harf;			
				Liste->DegerAra(harf);
				system("cls");
				cout << "Eklemek istediğiniz değer: ";
				do
				{
					eleman = _getche();
					Liste->Ekle(eleman);
				}
				while (!(eleman == '\r')); 
				system("cls");
				 Liste->Yazdir();
				break;		 
			case 9: 
				Liste->Yazdir();
				break;
			case 10:break; //çıkış  
			default: cout << "Hatalı Seçim" << endl;
			break;
			}	
			system("pause");
	  } 
	while (secim != 10);
	return 0;
}