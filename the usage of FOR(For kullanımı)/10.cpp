#include<iostream>
using namespace std;

/*
	2 3 4 5 6
	3 5 7 9 11
	4 7 10 13 16
	5 9 13 17 21
	6 11 16 21 26
	
	Yukar�daki ��kt�y� veren c++ program�.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int x,i,j;
	
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			x=i*j+1;
			cout << x << " ";
		}
		cout << "\n";
	}
	
	
	
	return 0;
}
