#include <iostream>
using namespace std;

void kareal(int sayim){
int karesi;
karesi = sayim*sayim;
cout<<"Sayinin karesi= "<<karesi<<endl;
}
int main(){
int sayi;
cout<<"Lutfen sayiyi giriniz: "<<endl;
cin>>sayi;
kareal(sayi);
return 0;
 }
