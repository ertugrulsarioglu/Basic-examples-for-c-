#include<iostream>
using namespace std;

//dýþarýdan girilen n sayýsýna kadar olan tek sayýlarýn toplmýný hesaplayan program.

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	int sayi,i;
	int toplam=0;
	
	cout << "Lütfen bir sayý giriniz: ";
	cin >> sayi;
	
	cout << "Girdiðiniz sayýya kadar olan tek sayýlar: ";
	for(i=1;i<sayi;i++)
	{
		if(i%2 == 1)
		{
			cout << i << " ";
			toplam=toplam+i;
		}
	}
	cout << endl;
	cout << "Girilen sayýya kadar olan tek sayýlarýn toplamý: " << toplam;
	
	
	
	
	
	
	
	return 0;
}
