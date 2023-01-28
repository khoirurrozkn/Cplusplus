#include <iostream>
#include "header.h"
using namespace std;

int main(){
	int nomer = 0;
	int input_int;
	int input_int_2;
	string data[100];
	string input_string;

	while(true){
		cout<<endl;
		cout<<"- Todolist -"<<endl;
		view(nomer, data);
		cout<<"Menu:"<<endl;
		cout<<"1. Tambah Todolist"<<endl;
		cout<<"2. Remove Todolist"<<endl;
		cout<<"3. Switch Todolist"<<endl;
		cout<<"Input : "; cin>>input_int;
		
		switch(input_int){
			case 1:
				cout<<"Masukan todo : "; getline(cin.ignore(), input_string);
				store(input_string, nomer, data);
				nomer += 1;
				break;
			case 2:
				cout<<"Remove number : "; cin>>input_int;
				destroy(input_int, nomer, data);
				nomer -= 1;
				break;
			case 3:
				cout<<"Switch number : "; cin>>input_int;
				cout<<"Switch with : "; cin>>input_int_2;
				put(input_int, input_int_2, nomer, data);
				break;
		}
	}
}
