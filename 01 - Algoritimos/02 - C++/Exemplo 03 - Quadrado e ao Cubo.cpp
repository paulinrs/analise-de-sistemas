#include <iostream>
#include <locale>
using namespace std;
int main()

{
	setlocale(LC_ALL, "ptb");
	int num, quadrado, cubo;
	cout<<"Informe um n�mero qualquer:\n";
	cin >> num;
	quadrado=num*num;
	cubo= num*num*num;
	cout <<num << " ao quadrado �: "<<quadrado<< "\n";
	cout <<num << " ao cubo �: "<<cubo;
		
}
