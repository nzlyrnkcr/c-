#include <iostream>
using namespace std;

void toplam(){
int toplam=0;
int a, b;
cout<<"Lutfen birinci sayiyi giriniz: "<<endl;
cin>>a;
cout<<"Lutfen ikinci sayiyi giriniz: "<<endl;
cin>>b;

toplam=a+b;
cout<<"Sayilarin Toplami= "<<toplam<<endl;
}
int main(){
toplam();
return 0;
}
