#include<iostream>
using namespace std;

/*
	*
	**
	***
	****
	*****
	
	Yukar�daki ��kt�y� veren c++ program�.
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
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
