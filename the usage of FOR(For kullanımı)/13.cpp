#include<iostream>
using namespace std;

/*
	1
	2 1
	3 2 1
	4 3 2 1
	5 4 3 2 1
	6 5 4 3 2 1
	7 6 5 4 3 2 1
	
	Yukar�daki ��kt�y� veren c++ program�.	
*/
int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter k�t�phanesi.
	
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=i;j>=1;j--)
		{
			cout << j << " " ;
		}
		cout << endl;
	}

	
	return 0;
}
