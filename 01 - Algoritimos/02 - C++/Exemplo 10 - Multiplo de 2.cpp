#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	int num, resto;
	cout<<"Informe um n�mero qualquer:";
	cin>> num;
	resto=num%2;
	
	if(resto==0)
	
	{
		cout<<"Este n�mero � m�ltiplo de 2!";
	}
	
	else
	
	{
		cout<< "Este n�mero n�o � m�ltiplo de 2!";
	}
}
