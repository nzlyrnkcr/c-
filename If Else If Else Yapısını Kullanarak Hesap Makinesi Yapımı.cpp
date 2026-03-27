#include <iostream>
using namespace std;
int main(){
char islem;
int sayi1,sayi2;

cout<<"Lutfen hangi islemi yapmak istediginizi giriniz: "<<endl;
cin>>islem;
cout<<"Sayilari giriniz: "<<endl;
cin>>sayi1>>sayi2;

if(islem=='+'){
    cout<<"sayilarin toplami= "<<sayi1+sayi2<<endl;
}
else if(islem=='-'){
    cout<<"Sayilarin farki= "<<sayi1-sayi2<<endl;
}
else if(islem=='/'){
    cout<<"Sayilarin bolumu= "<<(float) sayi1/sayi2<<endl;
}
else if(islem=='*'){
    cout<<"Sayilarin carpimi= "<<sayi1*sayi2<<endl;
}
else{
    cout<<"Gecersiz islem tanimi"<<endl;
}
return 0;
}
