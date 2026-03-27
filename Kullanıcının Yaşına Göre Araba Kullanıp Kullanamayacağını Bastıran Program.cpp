#include <iostream>
using namespace std;
int main(){
int yas;

cout<<"Kullanicinin Yasini Giriniz: "<<endl;
cin>>yas;

if(yas<0){
    cout<<"Gecersiz Yas Girdiniz!"<<endl;
}

else if(yas<18){
    cout<<"Ehliyet Alamaz!"<<endl;
}

else{
    cout<<"Ehliyet Alabilir!"<<endl;
}
return 0;
}
