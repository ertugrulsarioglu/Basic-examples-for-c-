#include<iostream>
using namespace std;

/*
	N elemanlý bir dizideki pozitif elemanlarýn ortalamasýný bulan program.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	int dizi[100];
	int n,i,toplam=0;
	int k,ort;
	
	cout << "************N elemanlý bir dizideki pozitif elemanlarýn ortalamasýný bulan program************\n\n" << "N sayýsýný giriniz: ";
	cin >> n;
	
	for(i=1; i<=n ; i++)
	{
		cout << i <<". elemaný girin: ";
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
	
	cout << "Girdiðiniz dizideki pozitif elemanlarýn ortalamasý: " << ort;
	
	
	return 0;
}
