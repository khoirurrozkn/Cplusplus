#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <cstdlib>
#include "header.h"
using namespace std;

int main(){
	int dummy_int;
	int null;
	string dummy_string;
	int x = 0;
	int data[10][2];
	string nama[10];
	string input_string;
	int input_int;
	int saldo;
	int user;
	
	do{
		system("cls");
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"|                   BANK RAKYAT KONOHA                |"<<endl;
		cout<<"|-----------------------------------------------------|"<<endl;
		cout<<"|                     MASUK / DAFTAR                  |"<<endl;
		cout<<"|-----------------------------------------------------|"<<endl;
		cout<<"| 1 . Buat akun                                       |"<<endl;
		cout<<"| 2 . Masuk                                           |"<<endl;
		cout<<"-------------------------------------------------------"<<endl;
		cout<<" >>> Masukan pilihan : "; cin>>input_int;
		switch(input_int){
			case 1:
				system("cls");
				cout<<"-------------------------------------------------------"<<endl;
				cout<<"|                       Buat akun                     |"<<endl;
				cout<<"-------------------------------------------------------"<<endl;
				cout<<" >>> Masukan pin      : "; cin>>input_int;
				cout<<" >>> Masukan username : "; cin>>input_string;
				cout<<"-------------------------------------------------------"<<endl;
				cout<<store(input_int, data)<<endl;
				sleep(2);
				nama[x] = input_string;
				data[x][0] = input_int;
				x+=1;
				break;
			case 2:				
				system("cls");
				cout<<"-------------------------------------------------------"<<endl;
				cout<<"|                         Masuk                       |"<<endl;
				cout<<"-------------------------------------------------------"<<endl;
				cout<<" >>> Masukan pin   : "; cin>>user;
				if(auth(user, data)){
				cout<<"-------------------------------------------------------"<<endl;
				cout<<" >>> Selamat datang "<<welcome(user, data, nama)<<endl;
				cout<<"-------------------------------------------------------"<<endl;
				sleep(2);
				system("cls");
					dashboard :					
						system("cls");
						cout<<"-------------------------------------------------------"<<endl;
						cout<<"|                      DASHBOARD                      |"<<endl;
						cout<<"|-----------------------------------------------------|"<<endl;
						cout<<"| 1 . Cek akun                                        |"<<endl;
						cout<<"| 2 . Edit akun                                       |"<<endl;
						cout<<"| 3 . Hapus akun                                      |"<<endl;
						cout<<"| 4 . Isi saldo                                       |"<<endl;
						cout<<"| 5 . Tarik saldo                                     |"<<endl;
						cout<<"| 6 . Cek saldo                                       |"<<endl;
						cout<<"| 7 . Transfer saldo                                  |"<<endl;
						cout<<"| 8 . Game berhadiah                                  |"<<endl;
						cout<<"| 9 . Logout                                          |"<<endl;
						cout<<"-------------------------------------------------------"<<endl;
						cout<<" >>> Masukan pilihan : "; cin>>input_int;
						switch(input_int){
							case 1:
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"|                       Cek Akun                      |"<<endl;
								cout<<"|-----------------------------------------------------|"<<endl;
								view("tanpanomer", user, nama, data);
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> "; system("pause");
								goto dashboard;
							case 2:
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"|                       Edit Akun                     |"<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								dummy_int = user;
								view("nomer", user, nama, data);
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> Masukan pilihan : "; cin>>input_int;
								switch(input_int){
									case 1:
										cout<<"-------------------------------------------------------"<<endl;
										cout<<" >>> Masukan username baru : "; cin>>input_string;
										put(dummy_int, input_string, nama, data);
										cout<<"-------------------------------------------------------"<<endl;
										cout<<"| Username anda sudah di perbarui                     |"<<endl;
										cout<<"-------------------------------------------------------"<<endl;
										sleep(2);
										break;
									case 2:
										cout<<"-------------------------------------------------------"<<endl;
										cout<<" >>> Masukan pin baru : "; cin>>input_int;
										user = input_int;
										put(dummy_int, input_int, nama, data);
										cout<<"-------------------------------------------------------"<<endl;
										cout<<"| Pin anda sudah di perbarui                          |"<<endl;
										cout<<"-------------------------------------------------------"<<endl;
										sleep(2);
										break;
									case 3:
										goto dashboard;
								}
								goto dashboard;
							case 3:						
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"|                     Hapus akun                      |"<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> Apakah anda yakin? ( y / t ) : "; cin>>input_string;
								if(input_string == "t"){
									goto dashboard;
								}
								cout<<destroy(user, data, null)<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								sleep(2);
								goto exit;
							case 4:
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"|                       Isi saldo                     |"<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> Masukan saldo : "; cin>>saldo;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<isisaldo(user, saldo, nama, data)<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> "; system("pause");
								goto dashboard;
							case 5:
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"|                      Tarik saldo                    |"<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> Masukan nominal : "; cin>>saldo;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<tariksaldo(user, saldo, data)<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								sleep(2);
								goto dashboard;
							case 6:
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"|                        Cek saldo                     "<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> Saldo anda : "<<ceksaldo(user, data)<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								sleep(2);
								cout<<" >>> "; system("pause");
								goto dashboard;
							case 7:
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"|                       Transfer                      |"<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"| Uang transfer akan di ambil dari saldo anda         |"<<endl<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> "; system("pause");
								transfer :
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> Masukan pin akun yang mau anda transfer : "; cin>>input_int;
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								view("transfer", input_int, nama, data);
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> Apakah benar? ( y / t ) : "; cin>>input_string;
								if(input_string == "y"){
									if(auth(input_int, data)){
										cout<<"-------------------------------------------------------"<<endl;
										cout<<" >>> Masukan nominal : "; cin>>saldo;
										cout<<"-------------------------------------------------------"<<endl;
										cout<<transfersaldo(user, input_int, saldo, nama, data)<<endl;
										cout<<"-------------------------------------------------------"<<endl;
										sleep(2);
										cout<<" >>> "; system("pause");
										goto dashboard;
									}	
								}
								goto transfer;
							case 8:
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"|                     Game suit                       |"<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> "; system("pause");
								do{
									system("cls");
									cout<<"-------------------------------------------------------"<<endl;
									cout<<"| 1 . Batu                                            |"<<endl;
									cout<<"| 2 . Gunting                                         |"<<endl;
									cout<<"| 3 . Kertas                                          |"<<endl;
									cout<<"-------------------------------------------------------"<<endl;
									cout<<" >>> Masukan pilihan : "; cin>>input_int;
									hitung();
									game(input_int, user, nama, data);
									sleep(2);
									cout<<"-------------------------------------------------------"<<endl;
									cout<<" >>> Apakah anda ingin bermain lagi ? ( y / t ) : "; cin>>input_string;
								}while(input_string == "y");
								goto dashboard;
							case 9:
								user = 0;
								system("cls");
								cout<<"-------------------------------------------------------"<<endl;
								cout<<"| Sampai jumpa lagi                                   |"<<endl<<endl;
								cout<<"-------------------------------------------------------"<<endl;
								cout<<" >>> "; system("pause");
								system("cls");
								goto exit;
						}
				}
				break;
		}
		exit :
		cout<<"-------------------------------------------------------"<<endl;
		cout<<" >>> Kembali ke Halaman Daftar / Masuk ? ( y / t ) : "; cin>>input_string;
	}while(input_string == "y");
}
