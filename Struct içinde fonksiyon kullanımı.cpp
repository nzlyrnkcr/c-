#include <iostream>
#include <string>
using namespace std;

struct Calisan{
       string ad;
       string soyad;
       int yas;
       float maas;
void bilgiler(){
cout<<"Ad= "<<ad<<endl;
cout<<"Soyad= "<<soyad<<endl;
cout<<"Yas= "<<yas<<endl;
cout<<"Maas= "<<maas<<endl;}
       };
int main(){
Calisan ilk;
cout<<"Lutfen adinizi giriniz: "<<endl;
cin>>ilk.ad;
cout<<"Lutfen soyadinizi giriniz: "<<endl;
cin>>ilk.soyad;
cout<<"Lutfen yasinizi giriniz: "<<endl;
cin>>ilk.yas;
cout<<"Lutfen maasinizi giriniz: "<<endl;
cin>>ilk.maas;

cout<<"Calisan Bilgileri:"<<endl;
ilk.bilgiler();

return 0;
}
