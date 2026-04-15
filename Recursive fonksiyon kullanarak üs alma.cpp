#include <iostream>
using namespace std;

int usal(int taban, int us){

    if(us==0){
        return 1;
    }
    else{
        return taban*usal(taban,us-1);
    }}
int main(){
int taban, us;
cout<<"Taban degerini giriniz: "<<endl;
cin>>taban;
cout<<"Us degerini giriniz: "<<endl;
cin>>us;

int sonuc= usal(taban,us);
cout<<"Sonuc= "<<sonuc<<endl;
return 0;
 }
