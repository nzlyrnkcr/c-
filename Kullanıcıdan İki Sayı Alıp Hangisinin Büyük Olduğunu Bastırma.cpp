#include <iostream>
using namespace std;
int main(){
int sayi1, sayi2;

cout<<"Sayi degerlerini giriniz:"<<endl;
cin>>sayi1>>sayi2;

if(sayi1<sayi2){
  cout<<sayi2<<" buyuktur "<< sayi1<<"'den"<<endl;
}

else if(sayi1>sayi2){
    cout<<sayi1<<" buyuktur "<< sayi2<<"'den"<<endl;
}

else{
    cout<<"Sayilar esittir."<<endl;
}
return 0;
}
