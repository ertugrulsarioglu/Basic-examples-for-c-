#include<iostream>
using namespace std;

/*
	N elemanlý bir dizideki en küçük elemaný ve bu elemanýn adresini bulan program.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	int dizi[100];
	int n,i;
	int yer,enkucuk;

	cout << "************N elemanlý bir dizideki en küçük elemaný ve bu elemanýn adresini bulan program************\n\n" << "N sayýsýný giriniz: ";
	cin >> n;
	
	for(i=1; i<=n ; i++)
	{
		cout << i <<". elemaný girin: ";
		cin >> dizi[i];
	}
	enkucuk=dizi[i];
	
	
	for (i=1; i<=n ; i++)
	{
		if(enkucuk>dizi[i])
		{
			enkucuk=dizi[i];
			yer=i;
		}
	
	}
	
	
	cout << "Girdiðiniz dizideki en küçük eleman " << enkucuk << "'dir ve yeri " << yer;
	
	
	return 0;
}
