#include<iostream>
using namespace std;

//D��ardan girilen n say�s�na kadar olan say�lar�n karelerinin toplam�n� hesaplayan c program�.

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	int sayi,islem,i;
	int toplam=0;
	
	cout << "L�tfen bir say� giriniz: ";
	cin >> sayi;
	
	cout << "Girdi�iniz say�ya kadar olan say�lar: ";
	for(i=1;i<sayi;i++)
	{
		
		cout << i << " " ;
	}
	cout << endl;
	cout << "Girdi�iniz say�ya kadar olan say�lar�n kareleri: ";

	for(i=1;i<sayi;i++)
	{
		
		islem= i*i;
		toplam=toplam + islem;
		cout << islem << " " ;
	}
	cout << endl;
	cout << "Girdi�iniz say�ya kadar olan say�lar�n kareleri toplam�: " << toplam;

	return 0;
}
