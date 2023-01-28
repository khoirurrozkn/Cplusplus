#include <iostream>
using namespace std;

void view(int nomer, string data[100], int i = 0){
	if(nomer != 0){
		if(i < nomer){
			cout<<(i+1)<<". "<<data[i]<<endl;
			return view(nomer, data, (i+1));
		}
		return;
	}
	return;
}

void store(string input_string,int nomer, string data[100]){
	data[nomer] = input_string;
	nomer += 1;
	return;
}

void destroy(int input_int, int nomer, string data[100]){
	int x = 0;
	string null;
	string dummy[100];
	
	input_int -= 1;
	data[input_int] = null;
	
	for(int i = 0; i < nomer; i++){
		if(data[i] != null){
			dummy[x] = data[i];
			x += 1;
		}
	}
	for(int i = 0; i < nomer; i++){
		data[i] = dummy[i];
	}
	nomer -= 1;
	return;
}

void put(int input_int, int input_int_2,int nomer, string data[100]){
	string dummy;
	
	input_int -= 1;
	input_int_2 -= 1;
	
	dummy = data[input_int];
	data[input_int] = data[input_int_2];
	data[input_int_2] = dummy;
	return;
}



