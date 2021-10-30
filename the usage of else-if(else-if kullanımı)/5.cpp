#include<iostream>
using namespace std;

//Dýþardan girilen 3 sayýnýn en büyüðünü bulan c programý.

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	int sayi1,sayi2,sayi3;
	
	cout << "Lütfen 3 adet sayý giriniz: ";
	cin >> sayi1 >> sayi2 >> sayi3;
	
	if((sayi1 > sayi2) && (sayi1 > sayi3))
	{
		cout << "Girdiðiniz sayýlarýn en büyüðü: " << sayi1;
	}
	else if((sayi2 > sayi1) && (sayi2 > sayi3))
	{
		cout << "Girdiðiniz sayýlarýn en büyüðü: " << sayi2;
	}
	else
	{
		cout << "Girdiðiniz sayýlarýn en büyüðü: " << sayi3;
	}


	return 0;
}
