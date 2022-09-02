#include <iostream>
#include <locale>
using namespace std;
int main()

{
	setlocale(LC_ALL, "ptb");
	int dias, anos;
	cout<< "Quantos dias você já viveu?\n";
	cin >> dias;
	anos = dias/365;
	cout <<"Você já viveu "<< anos <<" anos."; 
	
	
}
