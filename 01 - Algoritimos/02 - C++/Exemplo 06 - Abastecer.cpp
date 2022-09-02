#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	float qtdeDin,valComb,qtdeLitros;
	cout<<"Quanto custa o litro do combustível? R$";
	cin>>valComb;	
	cout<<"Quantos reais você tem? R$ ";
 	cin >> qtdeDin;	
	qtdeLitros=qtdeDin/valComb;	
	cout<< "Com R$" << qtdeDin << " você consegue abastecer " << 
	qtdeLitros << " litros de combustível.";
	
}
