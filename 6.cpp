#include<iostream>
using namespace std;

//D��ardan girilen 4 adet say�n�n aritmetik say�n�n aritmetik ortalamas�n� bulan c++ program�

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	float sayi1,sayi2,sayi3,sayi4,ort;
	float toplam=0;
	
	cout << "L�tfen 4 tane say� giriniz: ";
	cin >> sayi1 >> sayi2 >> sayi3 >> sayi4;
	
	toplam = sayi1 + sayi2 + sayi3 + sayi4;
	ort= toplam / 4;
	
	cout << "Girdi�iniz say�lar�n aritmetik ortalamas�: " << ort;
	

	return 0;
}
