#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	float preCompra, preVenda;
	cout << "Pre�o de compra do produto R$ ";
	cin >> preCompra;
	preVenda= preCompra + (preCompra*20/100);
	cout << "Pre�o sugerido para venda R$ " << preVenda;
}
