#include<iostream>
using namespace std;

/*
	N elemanl� bir dizideki elemanlar�n toplam�n� bulan program c++
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int dizi[100];
	int i,n,toplam=0;
	
	cout << "************N elemanl� bir dizideki elemanlar�n toplam�n� bulan program***********\n\n" << "N say�s�n� giriniz: ";
	cin >> n ;
	
	for(i=1 ; i<=n ; i++)
	{
		cout << i << ". eleman� giriniz: ";
		cin >> dizi[i];
		
	}
	for(i=1 ; i<=n ; i++)
	{
		toplam=toplam+dizi[i];
	}
	cout << endl;
	cout << "Girdi�iniz say�lar�n toplam�: " << toplam;
	
	
	return 0;
}
