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
	cout<< "Você tem ou fará "<< idade << " anos"<< "\n";

	if(idade>=16)
	{
		cout<< "Você já pode votar!";		
	}	
	else
	{
		cout<< "Você não pode votar!";		
	}
		 	
}
