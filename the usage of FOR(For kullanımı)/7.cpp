#include<iostream>
using namespace std;

//�arpma i�lemini kullanmadan iki say�n�n �arp�m�n� bulan c program�

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int sayi1,x,i;
	int toplama=0;
	
	cin >> sayi1 >> x;
	
	for(i=0;i<x;i++)
	{
		toplama = toplama + sayi1;
	}
	cout << toplama;
	
	

	return 0;
}
