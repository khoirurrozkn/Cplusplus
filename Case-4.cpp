#include <iostream>
using namespace std;

void fungsi(int i, int j,int n){
	if(i<=n){
		if (j<=i){
			if (j % 3==1){
				cout<<"+ ";
			}else if(j% 3==2){
				cout<<"# ";
			
			}
			else {
				cout<<"@ ";
			}
			return fungsi (i,(j+1),n);
		}
		j=1;
		cout<<endl;
		return fungsi((i+1),j,n);
	}
}

int main (){
	int nilai ;
	cout<<"Masukan Nilai : ";
	cin>>nilai;
	fungsi(1,1,nilai);
}
