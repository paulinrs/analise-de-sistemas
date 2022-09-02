#include <iostream>
#include <locale>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "ptb");
	int media, frequencia;
	
	cout<< "Informe a média final: ";
	cin>> media;
	
	cout<< "Informe a frequência: ";
	cin>> frequencia;
	
	if (media>=6 && frequencia>=75)
	
	{
		cout<< "Aluno aprovado!";
	}
	
	else
	
	{
		cout<< "Aluno reprovado!";
		
	}
	
	
}
	
