#include <iostream>
using namespace std;

int main(){
	string teks;
	int akhir;
	int jmlHuruf[26];
	int jmlKonsonan = 0;
	int jmlHidup = 0;
	
	for(int i_07530 = 0; i_07530 < 26; i_07530++){
		jmlHuruf[i_07530] = 0;
	}
	cout<<"input : ";
	getline(cin, teks);
	
	akhir = teks.length();
	for(int j_07530 = 0; j_07530 < akhir; j_07530++){
		if(isalpha(teks[j_07530])){
			jmlHuruf[tolower(teks[j_07530]) - 'a']++;
			if(teks[j_07530] != 'a' &&
			   teks[j_07530] != 'i' &&
			   teks[j_07530] != 'u' &&
			   teks[j_07530] != 'e' &&
			   teks[j_07530] != 'o'){
				jmlKonsonan++;
			}else{
				jmlHidup++;
			}
		}
	}
	for(int k_07530 = 0; k_07530 < 26; k_07530++){
		if(jmlHuruf[k_07530] > 0){
			cout<<char(k_07530+'A')<<" : "<<jmlHuruf[k_07530]<<endl;
		}
	}
	
	cout<<"Huruf Konsonan : "<<jmlKonsonan<<endl;
	cout<<"Huruf Hidup    : "<<jmlHidup<<endl;
}
