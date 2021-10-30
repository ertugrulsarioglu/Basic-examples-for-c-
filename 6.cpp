#include<iostream>
using namespace std;

//Dýþardan girilen 4 adet sayýnýn aritmetik sayýnýn aritmetik ortalamasýný bulan c++ programý

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	float sayi1,sayi2,sayi3,sayi4,ort;
	float toplam=0;
	
	cout << "Lütfen 4 tane sayý giriniz: ";
	cin >> sayi1 >> sayi2 >> sayi3 >> sayi4;
	
	toplam = sayi1 + sayi2 + sayi3 + sayi4;
	ort= toplam / 4;
	
	cout << "Girdiðiniz sayýlarýn aritmetik ortalamasý: " << ort;
	

	return 0;
}
