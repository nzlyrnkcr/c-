#include <iostream>
using namespace std;
int main(){
/*Ýþlem operatörlerini +=1, -=2, /=3, *=4 þeklinde giriniz*/
int sayi1, sayi2;

cout<<"Lutfen sayilari giriniz:"<<endl;
cin>>sayi1>>sayi2;

int islem;
cout<<"Ýslem operator numarasýný giriniz:"<<endl;
cin>>islem;

switch(islem){
case 1:
    cout<<"Toplam= "<<sayi1+sayi2<< endl;
    break;
case 2:
    cout<<"Cikarmanin Sonucu= "<< sayi1-sayi2<<endl;
    break;
case 3:
    cout<<"Bölmenin sonucu= "<< (float) sayi1/sayi2<<endl;
    break;
case 4:
    cout<<"Carpmanýn Sonucu= "<< sayi1*sayi2<<endl;
    break;}
    return 0;}
