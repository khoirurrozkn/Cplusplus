#include <iostream>
using namespace std;

struct FullName{
	string firstName, middleName, lastName;
};

struct Mahasiswa{
	FullName name;
	string address;
};

string create(Mahasiswa data[5], Mahasiswa request, int index){
	data[index].name.firstName = request.name.firstName;
	data[index].name.middleName = request.name.middleName;
	data[index].name.lastName = request.name.lastName;
	data[index].address = request.address;
	return "data sudah di masukan";
}

void read(Mahasiswa data[5]){
	cout<<"["<<endl;
	for(int i = 0; i < 5; i++){
		if(data[i].address != ""){
			cout<<"    {"<<endl;
			cout<<"        firstName :"<<data[i].name.firstName<<","<<endl;
			cout<<"        middleName :"<<data[i].name.middleName<<","<<endl;
			cout<<"        lastName : "<<data[i].name.lastName<<","<<endl;
			cout<<"        address : "<<data[i].address<<endl;
			cout<<"    },"<<endl;
		}else{
			break;
		}
	}
	cout<<"]"<<endl;
}

int main(){
	Mahasiswa data[5];
	string firstName, middleName, lastName, address;
	int index = 0;
	int pilihan;
	string a;
	
	do{
		cout<<"Masukan pilhan : 1. create, 2. read";
		cin>>pilihan;
		if(pilihan == 1){
				cout<<"Masukan nama depan anda : ";
				cin>>firstName;
				
				cout<<"Masukan nama tengah anda : ";
				cin>>middleName;
				
				cout<<"Masukan nama akhir anda : ";
				cin>>lastName;
				
				cout<<"Masukan alamat anda : ";
				cin>>address;
				
				Mahasiswa dataSatu = {
					name : FullName {
						firstName : firstName,
						middleName : middleName,
						lastName : lastName
					},
					address : address
				};
				
				cout<<create(data,dataSatu,index)<<endl;
				index++;
			}else{
			
				read(data);
			}
		
		cout<<"lagi?";
		cin>>a;
	}while(a == "y");
}
