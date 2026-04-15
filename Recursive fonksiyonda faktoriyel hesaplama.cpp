#include <iostream>
using namespace std;

int faktoriyel(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*faktoriyel(n-1);
    }}
int main(){
int sayi;
cout<<"Faktoriyeli alinacak sayiyi giriniz: "<<endl;
cin>>sayi;

int sonuc= faktoriyel(sayi);
cout<<"Sonuc= "<<sonuc<<endl;
return 0;
}
