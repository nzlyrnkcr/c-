#include <iostream>
#include <string>
using namespace std;

class hesap{
private:
    int bakiye;
public:
    void setBakiye(){
        cout<<"Lutfen bakiyeyi giriniz: "<<endl;
        cin>>bakiye;

        if(bakiye<0){
            cout<<"Hata:Bakiye eksi olamaz!"<<endl;
            bakiye=0;
        }
    }
    int getBakiye(){
    return bakiye;
    }
    };
int main(){
hesap h1;

h1.setBakiye();

cout<<"Mevcut Bakiyeniz= "<<h1.getBakiye()<<endl;
return 0;
}
