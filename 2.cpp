#include <iostream>
using namespace std;

//yar��ap� d��ar�dan girilen dairenin �evresini ve alan�n� bulan program...

int main(){
	setlocale(LC_ALL,"Turkish"); //t�rk�e karakter k�t�phanesi
	
	float yaricap;
	float cevre,alan;
	float pi=3.14;
	
	cout << "L�tfen dairenin yar��ap�n� giriniz: ";
	cin >> yaricap;
	
	cevre=2*pi*yaricap;
	alan=pi*(yaricap*yaricap);
	
	cout << "Yar��ap� girilen dairenin alan�: " << alan << endl;
	cout << "Yar��ap� girilen dairenin �evresi: " << cevre << endl;
	
	
	
	
	
	
	
	
	return 0;
}
