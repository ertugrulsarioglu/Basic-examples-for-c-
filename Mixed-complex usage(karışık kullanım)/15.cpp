#include<iostream>
using namespace std;

/*
	N elemanl� bir dizideki pozitif elemanlar�n ortalamas�n� bulan program.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int dizi[100];
	int n,i,toplam=0;
	int k,ort;
	
	cout << "************N elemanl� bir dizideki pozitif elemanlar�n ortalamas�n� bulan program************\n\n" << "N say�s�n� giriniz: ";
	cin >> n;
	
	for(i=1; i<=n ; i++)
	{
		cout << i <<". eleman� girin: ";
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
	
	cout << "Girdi�iniz dizideki pozitif elemanlar�n ortalamas�: " << ort;
	
	
	return 0;
}
