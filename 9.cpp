#include<iostream>
using namespace std;


//D��ar�dan girilen �� basamakl� bir say�n�n rakamlar� toplam�n� bulan c++ program�.

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int sayi,yuzb,onb,birb;
	int toplam=0;
	cout << "�� basamakl� bir say� giriniz:";
	cin >> sayi;
	//564
	yuzb=sayi/100;
	onb=( sayi - ( ( sayi/100 ) * 100 ) ) / 10;
	birb=sayi % 10;
	
	toplam=yuzb+onb+birb;
	
	cout << "Girdi�iniz �� basamakl� say�n�n rakamlar� toplam� " << toplam << "'d�r.";
	
	
	
	return 0;
}
