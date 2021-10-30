#include<iostream>
using namespace std;


//Dýþarýdan girilen üç basamaklý bir sayýnýn rakamlarý toplamýný bulan c++ programý.

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	int sayi,yuzb,onb,birb;
	int toplam=0;
	cout << "Üç basamaklý bir sayý giriniz:";
	cin >> sayi;
	//564
	yuzb=sayi/100;
	onb=( sayi - ( ( sayi/100 ) * 100 ) ) / 10;
	birb=sayi % 10;
	
	toplam=yuzb+onb+birb;
	
	cout << "Girdiðiniz üç basamaklý sayýnýn rakamlarý toplamý " << toplam << "'dýr.";
	
	
	
	return 0;
}
