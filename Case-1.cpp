#include <iostream>
using namespace std;

int main(){
	unsigned short n, hasil1, hasil2, hasil3;
	
	cout<<"Masukan input : "; cin>>n;
	
	hasil1 = n / 100;
	hasil2 = n / 10 % 10;
	hasil3 = n % 10;
	
	cout<<"\nOutput\nRatusan : "<<hasil1<<endl;
	cout<<"Puluhan : "<<hasil2<<endl;
	cout<<"Satuan  : "<<hasil3<<endl;
	
	return 0;
}
