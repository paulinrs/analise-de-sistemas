#include <iostream>
#include <locale>
using namespace std;
int main()

{
	setlocale(LC_ALL, "ptb");
	int dias, anos;
	cout<< "Quantos dias voc� j� viveu?\n";
	cin >> dias;
	anos = dias/365;
	cout <<"Voc� j� viveu "<< anos <<" anos."; 
	
	
}
