#include <iostream>
using namespace std;
int main(){
int sayi;
int Faktoriyel=1;

cout<<"Faktoriyelini almak istediginiz sayiyi giriniz: ";
cin>>sayi;

for(int i=sayi; sayi>=1; sayi--){
    Faktoriyel*=sayi;
}
cout<<"Sayinin Faktoriyeli= "<<Faktoriyel<<endl;
return 0;
}
