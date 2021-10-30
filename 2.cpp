#include <iostream>
using namespace std;

//yarýçapý dýþarýdan girilen dairenin çevresini ve alanýný bulan program...

int main(){
	setlocale(LC_ALL,"Turkish"); //türkçe karakter kütüphanesi
	
	float yaricap;
	float cevre,alan;
	float pi=3.14;
	
	cout << "Lütfen dairenin yarýçapýný giriniz: ";
	cin >> yaricap;
	
	cevre=2*pi*yaricap;
	alan=pi*(yaricap*yaricap);
	
	cout << "Yarýçapý girilen dairenin alaný: " << alan << endl;
	cout << "Yarýçapý girilen dairenin çevresi: " << cevre << endl;
	
	
	
	
	
	
	
	
	return 0;
}
