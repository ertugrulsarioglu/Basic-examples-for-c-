#include<iostream>
using namespace std;

/*
	Dýþarýdan girilen N elemanlý bir diziyi tersine çeviren program.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	int dizi[100];
	int i,n,k,l;
	
	cout << "****************Dýþarýdan girilen N elemanlý bir diziyi tersine çeviren program.****************\n\n" << "N sayýsýný giriniz: ";
	cin >> n;
	cout << endl;
	
	for(i=1 ; i<=n ; i++)
	{
		cout << i << ". elemaný giriniz: ";
		cin >> dizi[i];
		
	}
	cout << "\n\n";
	for(l=n ; l>=1 ; l--)
	{
		cout << l << ". eleman: " << dizi[l] << endl;
	}
	return 0;
}
