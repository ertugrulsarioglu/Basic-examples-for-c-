#include <iostream>

using namespace std;

//kullanýcýdan alýnan n sayýsýna kadar doðal sayýlarý toplayan program...

int main(){
	int sayi,i;
	int toplam=0;
	
	cout << "lutfen sayi giriniz: ";
	cin >> sayi;
	
	cout << "girdiginiz sayiya kadar olan dogal sayilar: ";
	for(i=0;i<sayi;i++)
	{ 
	cout << i << " ";
	toplam= toplam + i;
			
	}
	cout << endl;
	cout << "girdiginiz sayiya kadar olan dogal sayilarin toplami: " << toplam;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
