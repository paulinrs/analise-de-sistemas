#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	int anoNasc, anoAtual, idade;
	cout<< "Ano atual:";
	cin>> anoAtual;
	cout<< "Ano de nascimento:";
	cin>> anoNasc;
	idade = anoAtual-anoNasc;
	cout<< "Voc� tem ou far� "<< idade << " anos"<< "\n";

	if(idade>=16)
	{
		cout<< "Voc� j� pode votar!";		
	}	
	else
	{
		cout<< "Voc� n�o pode votar!";		
	}
		 	
}
