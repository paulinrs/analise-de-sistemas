#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	
	float num1, num2, resultado, op;
	
	cout<< "Informe o 1� n�mero:";
	cin>> num1;
	cout<< "informe o 2� n�mero:";
	cin>> num2;
	cout<< "-------------------------";
	cout<< "Escolha a opera��o matem�tica:\n";
	cout<< "1- Adi��o\n";
	cout<< "2- Subtra��o\n";
	cout<< "3- Divis�o\n";
	cout<< "4- multiplica��o\n";
	cout<< "Op��o: ";
	cin>> (op);
	
	if (op==1)
	
	{
		resultado=num1+num2;
		cout<< num1<<"+"<<num2<<"="<<resultado;
		
	}
	
	else if (op==2)
	
	{
		resultado=num1-num2;
		cout<< num1<<"-"<<num2<<"="<<resultado;
	}
	
	else if (op==3)
	
	{
		resultado=num1/num2;
		cout<<num1<<"/"<<num2<<"="<<resultado;	
	}
	
	else if (op==4)
	
	{
		resultado=num1*num2;
		cout<<num1<<"*"<<num2<<"="<<resultado;
	}

	else 
	
	{
	cout<< "Opera��o inv�lida!!!";	
	}	
}
