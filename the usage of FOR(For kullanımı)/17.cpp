#include<iostream>
using namespace std;

/*
	D��ar�dan girilen N elemanl� bir diziyi tersine �eviren program.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int dizi[100];
	int i,n,k,l;
	
	cout << "****************D��ar�dan girilen N elemanl� bir diziyi tersine �eviren program.****************\n\n" << "N say�s�n� giriniz: ";
	cin >> n;
	cout << endl;
	
	for(i=1 ; i<=n ; i++)
	{
		cout << i << ". eleman� giriniz: ";
		cin >> dizi[i];
		
	}
	cout << "\n\n";
	for(l=n ; l>=1 ; l--)
	{
		cout << l << ". eleman: " << dizi[l] << endl;
	}
	return 0;
}
