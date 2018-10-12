#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int angka;
	cout<<"Menentukan Bilangan Genap Atau Ganjil"<<endl;
	cout<<"Masukan Bilangan : ";cin>>angka;
	
	string bil = angka % 2 == 0 ? "Genap": "Ganjil";
	cout<<bil;
	return 0;
}
