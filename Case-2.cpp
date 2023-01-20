#include <iostream>
  using namespace std;
  
  int main(){
    int place3 = 0;
    string total = "Bukan palindrom";
    int n, place1, place2;
    
    cout<<"Input : "; cin>>n;
    place1 = n;
    
    for(int i = 1; i <= 9999; i++){
      place2 = n % 10;
      place3 = (place3 * 10) + place2;
      if(place3 == place1){
        total = "Palindrom";
        break;
      }
      n = n / 10;
    }
    cout<<"Output : "<<total<<endl;
    return 0;
  }
