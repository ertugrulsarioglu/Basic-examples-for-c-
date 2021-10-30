#include<iostream>
using namespace std;

/*
	N elemanlý bir dizideki elemanlarýn toplamýný bulan program c++
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	int dizi[100];
	int i,n,toplam=0;
	
	cout << "************N elemanlý bir dizideki elemanlarýn toplamýný bulan program***********\n\n" << "N sayýsýný giriniz: ";
	cin >> n ;
	
	for(i=1 ; i<=n ; i++)
	{
		cout << i << ". elemaný giriniz: ";
		cin >> dizi[i];
		
	}
	for(i=1 ; i<=n ; i++)
	{
		toplam=toplam+dizi[i];
	}
	cout << endl;
	cout << "Girdiðiniz sayýlarýn toplamý: " << toplam;
	
	
	return 0;
}
