#include<iostream>
using namespace std;

/*
	N elemanl� bir dizideki en k���k eleman� ve bu eleman�n adresini bulan program.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int dizi[100];
	int n,i;
	int yer,enkucuk;

	cout << "************N elemanl� bir dizideki en k���k eleman� ve bu eleman�n adresini bulan program************\n\n" << "N say�s�n� giriniz: ";
	cin >> n;
	
	for(i=1; i<=n ; i++)
	{
		cout << i <<". eleman� girin: ";
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
	
	
	cout << "Girdi�iniz dizideki en k���k eleman " << enkucuk << "'dir ve yeri " << yer;
	
	
	return 0;
}
