#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	float peso_atual, emagrecer, engordar;
	cout<<"Peso atual (Kg):";
	cin>>peso_atual;
	emagrecer= peso_atual-(peso_atual*20/100);
	engordar= peso_atual+(peso_atual*15/100);
	cout<< "Peso - 20%: "<< emagrecer<< "\n";
	cout<< "Peso + 15%: "<< engordar;

		
}
