#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	float qtdeDin,valComb,qtdeLitros;
	cout<<"Quanto custa o litro do combust�vel? R$";
	cin>>valComb;	
	cout<<"Quantos reais voc� tem? R$ ";
 	cin >> qtdeDin;	
	qtdeLitros=qtdeDin/valComb;	
	cout<< "Com R$" << qtdeDin << " voc� consegue abastecer " << 
	qtdeLitros << " litros de combust�vel.";
	
}
