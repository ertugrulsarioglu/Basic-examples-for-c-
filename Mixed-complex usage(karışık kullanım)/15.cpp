#include<iostream>
using namespace std;

/*
	N elemanlı bir dizideki pozitif elemanların ortalamasını bulan program.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	int dizi[100];
	int n,i,toplam=0;
	int k,ort;
	
	cout << "************N elemanlı bir dizideki pozitif elemanların ortalamasını bulan program************\n\n" << "N sayısını giriniz: ";
	cin >> n;
	
	for(i=1; i<=n ; i++)
	{
		cout << i <<". elemanı girin: ";
		cin >> dizi[i];
	}
	for (i=1; i<=n ; i++)
	{
		if(dizi[i]>=0)
		{
			toplam= toplam + dizi[i];
			k=k+1;
			

		}
	}
	ort=toplam/k;
	
	cout << "Girdiğiniz dizideki pozitif elemanların ortalaması: " << ort;
	
	
	return 0;
}
