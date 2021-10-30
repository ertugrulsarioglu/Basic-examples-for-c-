#include<iostream>
using namespace std;

//Dýþardan girilen n sayýsýna kadar olan sayýlarýn karelerinin toplamýný hesaplayan c programý.

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	int sayi,islem,i;
	int toplam=0;
	
	cout << "Lütfen bir sayý giriniz: ";
	cin >> sayi;
	
	cout << "Girdiðiniz sayýya kadar olan sayýlar: ";
	for(i=1;i<sayi;i++)
	{
		
		cout << i << " " ;
	}
	cout << endl;
	cout << "Girdiðiniz sayýya kadar olan sayýlarýn kareleri: ";

	for(i=1;i<sayi;i++)
	{
		
		islem= i*i;
		toplam=toplam + islem;
		cout << islem << " " ;
	}
	cout << endl;
	cout << "Girdiðiniz sayýya kadar olan sayýlarýn kareleri toplamý: " << toplam;

	return 0;
}
