#include<iostream>
using namespace std;

/*
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	
	Yukarýdaki çýktýyý veren c++ programý.	
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kütüphanesi.
	int i,j;
	int x=0;
	
	for(i=1 ; i<=5 ; i++)
	{
		for(j=1;j<=i;j++)
		{
			x=x+1;
			cout << x << " ";
			
		}
		cout << endl;
	}

	
	return 0;
}
