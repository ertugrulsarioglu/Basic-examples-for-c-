#include<iostream>
using namespace std;

/*
	*
	**
	***
	****
	*****
	
	Yukarýdaki çýktýyý veren c++ programý.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}
