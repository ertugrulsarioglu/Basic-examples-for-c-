#include<iostream>
using namespace std;

//D��ardan girilen 3 say�n�n en b�y���n� bulan c program�.

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int sayi1,sayi2,sayi3;
	
	cout << "L�tfen 3 adet say� giriniz: ";
	cin >> sayi1 >> sayi2 >> sayi3;
	
	if((sayi1 > sayi2) && (sayi1 > sayi3))
	{
		cout << "Girdi�iniz say�lar�n en b�y���: " << sayi1;
	}
	else if((sayi2 > sayi1) && (sayi2 > sayi3))
	{
		cout << "Girdi�iniz say�lar�n en b�y���: " << sayi2;
	}
	else
	{
		cout << "Girdi�iniz say�lar�n en b�y���: " << sayi3;
	}


	return 0;
}
