#include<iostream>
using namespace std;


//1'den 999'a kadar olan tam say�lar i�eresinden basamaklar�n�n k�p de�eri toplam� kendisine e�it olan c++ program�

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int i,yuzb,onb,birb,kuptoplam;  //958
	
	cout << "1'den 999'a kadar olan tam say�lar i�eresinden basamaklar�n�n k�p de�eri toplam� kendisine e�it olan say�lar: ";

	for(i=1;i<=999;i++)
	{
		yuzb=i/100;
		onb=(i-((i/100)*100))/10;
		birb=i%10;
		kuptoplam=yuzb*yuzb*yuzb+onb*onb*onb+birb*birb*birb;
		
		if(i==kuptoplam){
			cout << i << "  ";
		}
	}
	
	
	return 0;
}
