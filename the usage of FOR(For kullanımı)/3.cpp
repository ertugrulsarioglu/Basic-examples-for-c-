#include<iostream>
using namespace std;

//d��ar�dan girilen n say�s�na kadar olan tek say�lar�n toplm�n� hesaplayan program.

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int sayi,i;
	int toplam=0;
	
	cout << "L�tfen bir say� giriniz: ";
	cin >> sayi;
	
	cout << "Girdi�iniz say�ya kadar olan tek say�lar: ";
	for(i=1;i<sayi;i++)
	{
		if(i%2 == 1)
		{
			cout << i << " ";
			toplam=toplam+i;
		}
	}
	cout << endl;
	cout << "Girilen say�ya kadar olan tek say�lar�n toplam�: " << toplam;
	
	
	
	
	
	
	
	return 0;
}
