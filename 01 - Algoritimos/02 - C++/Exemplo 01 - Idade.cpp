#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
int anoAtual, anoNasc, idade;
cout <<"Ano atual:\n ";
cin >> anoAtual;
cout <<"Ano de nascimento:\n";
cin >> anoNasc;
idade=anoAtual-anoNasc;
cout <<"Voc? tem ou far? " << idade << " anos.";
}
