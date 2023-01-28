#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <cstdlib>
using namespace std;

void slash(){
	cout<<"-------------------------------------------------------"<<endl;
	return;
}

string store(int input_int,int data[10][2],int i = 0){
	if(i < 10){
		if(input_int == data[i][0]){
			return " >>> Pin telah di gunakan, Silahkan gunakan pin yang lain";
		}
		return store(input_int, data, (i+1));
	}
	return " >>> Akun anda telah di buat";
}

void cls(){
	system("cls");
	slash();
	return;
}

string transfersaldo(int dummy, int input_int, int saldo,string nama[10],int data[10][2]){
	for(int i = 0; i < 10; i++){
		if(dummy == data[i][0]){
			data[i][1] -= saldo;
		}
	}
	for(int i = 0; i < 10; i++){
		if(input_int == data[i][0]){
			data[i][1] += saldo;
		}
	}
	return "| Transfer berhasil                                   |";
}

void hitung(){
	int i = 3;
	while(i >= 1){
		cls();
		cout<<" >>> "<<i<<endl;
		slash();
		sleep(1);
		i--;
	}
	return;
}

bool auth(int input_int, int data[10][2], int i = 0){
	if(i < 10){
		if(input_int == data[i][0]){
			return true;
		}
		return auth(input_int, data, (i+1));
	}
	cls();
	cout<<" Akun tidak di temukan"<<endl;
	sleep(2);
	return false;
}

string welcome(int input_int,int data[10][2],string nama[10], int i = 0){
	string kembali;
	if(i < 10){
		if(input_int == data[i][0]){
			kembali = nama[i];
			return kembali;
		}
		return welcome(input_int, data, nama,(i+1));
	}
}

void view(string nomer, int input_int, string nama[10],int data[10][2], int i = 0){
	if(i < 10){
		if(input_int == data[i][0]){
			if(nomer == "nomer"){
				cout<<" >>> 1 . Username anda : "<<nama[i]<<endl;
				cout<<" >>> 2 . Pin anda      : "<<data[i][0]<<endl;
				cout<<" >>> 3 . Kembali"<<endl;
				return;
			}else if(nomer == "tanpanomer"){
				slash();
				cout<<" >>> Username anda  : "<<nama[i]<<endl;
				cout<<" >>> Pin anda       : "<<data[i][0]<<endl;
				sleep(2);
				return;
			}else{
				slash();
				cout<<" >>> Username  : "<<nama[i]<<endl;
				cout<<" >>> Pin       : "<<data[i][0]<<endl;
				sleep(2);
				return;
			}
		}
		return view(nomer, input_int, nama, data, (i+1));
	}
}

void put(int dummy, string input_string, string nama[10],int data[10][2], int i = 0){
	if(i < 10){
		if(dummy == data[i][0]){
			nama[i] = input_string;
			return;
		}
		return put(dummy, input_string, nama, data, (i+1));
	}
}

void put(int dummy,int input_int, string nama[10],int data[10][2], int i = 0){
	if(i < 10){
		if(dummy == data[i][0]){
			data[i][0] = input_int;
			return;
		}
		return put(dummy, input_int, nama, data, (i+1));
	}
}

string destroy(int input_int, int data[10][2],int null, int i = 0){
	if(i < 10){
		if(input_int == data[i][0]){
			data[i][0] = null;
			data[i][1] = null;
			return "| Akun anda telah di hapus                            |";
		}
		return destroy(input_int, data, null, (i+1));
	}
}

string isisaldo(int input_int,int saldo, string nama[10], int data[10][2], int i = 0){
	if(i < 10){
		if(input_int == data[i][0]){
			data[i][1] = saldo;
			return"| Saldo anda sudah terisi                             |";
		}
		return isisaldo(input_int, saldo, nama, data,(i+1));
	}
}

string tariksaldo(int input_int, int saldo, int data[10][2], int i = 0){
	if(i < 10){
		if(input_int == data[i][0]){
			if(data[i][1] < saldo){
				return "| Penarikan gagal, saldo anda tidak mencukupi         |";
			}else{
				data[i][1] -= saldo;
				return "| Penarikan berhasil                                  |";
			}
		}
		return tariksaldo(input_int, saldo, data, (i+1));
	}
}

int ceksaldo(int input_int,int data[10][2],int i = 0){
	if(i < 10){
		if(input_int == data[i][0]){
			return data[i][1];
		}
		return ceksaldo(input_int, data, (i+1));
	}
}

void game(int input_int,int user,string nama[10],int data[10][2], int i = 0){
	int komputer = rand() %3 + 1;
	if(i < 10){
		if(user == data[i][0]){
			if(input_int == 1){
				if(komputer == 1){
					cout<<"| Komputer memilih batu juga, hasil seri              |"<<endl;
					return;
				}else if(komputer == 2){
					cout<<"| Komputer memilih gunting, kamu menang               |"<<endl;
					sleep(2);
					system("cls");
					cout<<" >>> Selamat "<<nama[i]<<" Kamu memenangkan hadiah Rp. 1000000"<<endl;
					data[i][1] += 1000000;
					return;
				}else if(komputer == 3){
					cout<<"| Komputer memilih kertas, kamu kalah                 |"<<endl;
					return;
				}
			}else if(input_int == 2){
				if(komputer == 1){
					cout<<"| Komputer memilih batu, kamu kalah                   |"<<endl;
					return;
				}else if(komputer == 2){
					cout<<"| Komputer memilih gunting juga, hasil seri           |"<<endl;
					return;
				}else if(komputer == 3){
					cout<<"| Komputer memilih kertas, kamu menang                |"<<endl;
					sleep(2);
					system("cls");
					cout<<" >>> Selamat "<<nama[i]<<" Kamu memenangkan hadiah Rp. 1000000"<<endl;
					data[i][1] += 1000000;
					return;
				}
			}else if(input_int == 3){
				if(komputer == 1){
					cout<<"| Komputer memilih batu, kamu menang                  |"<<endl;
					sleep(2);
					system("cls");
					cout<<" >>> Selamat "<<nama[i]<<" Kamu memenangkan hadiah Rp. 1000000"<<endl;
					data[i][1] += 1000000;
					return;
				}else if(komputer == 2){
					cout<<"| Komputer memilih gunting, kamu kalah                |"<<endl;
					return;
				}else if(komputer == 3){
					cout<<"| Komputer memilih kertas juga, hasil seri            |"<<endl;
					return;
				}
			}
			cout<<"| Format tidak di temukan                             |"<<endl;
			return;
		}
		return game(input_int, user, nama, data, (i+1));
	}
}
