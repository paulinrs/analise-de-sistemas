#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	const float quilo = 34.90;
	float prato, valorPagar;
	
	cout<< "Peso do prato do cliente - Kg: ";
	cin>> prato;
	valorPagar = prato*quilo;
	cout << "Valor a pagar: R$ "<<valorPagar;
	
}
