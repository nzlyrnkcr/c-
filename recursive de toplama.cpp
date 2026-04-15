#include <iostream>
using namespace std;

int toplam(int n){
    int sonuc;
    if(n==0){
        return 0;
    }
    else{
        return n+toplam(n-1);

    }
    }
int main(){
int n;
 cout<< "Lutfen sayiyi giriniz: "<< endl;
 cin>>n;

 int sonuc= toplam(n);
 cout<<"Sonuc= "<<sonuc;
 return 0;
 }
