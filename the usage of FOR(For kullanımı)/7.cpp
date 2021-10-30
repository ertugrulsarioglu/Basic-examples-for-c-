#include<iostream>
using namespace std;

//Çarpma iþlemini kullanmadan iki sayýnýn çarpýmýný bulan c programý

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
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
