#include <iostream>
#include <string>
using namespace std;

struct Calisan{
string ad;
string soyad;
int yas;
float maas;
};
void bilgiler(Calisan ilk){
cout<<"Ad= "<<ilk.ad<<endl;
cout<<"Soyad= "<<ilk.soyad<<endl;
cout<<"Yas= "<<ilk.yas<<endl;
cout<<"Maas= "<<ilk.maas<<endl;
}
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
bilgiler(ilk);
return 0;}
