#include <iostream>
using namespace std;

class kisi{
private:
    int yas;
public:
    void yasi_goster(int yasim){
    yas=yasim;
    cout<<"Yasi= "<<yas<<endl;
    }};
int main(){
kisi Nazli;
int yasim;
cout<<"Lutfen yasinizi giriniz: "<<endl;
cin>>yasim;

Nazli.yasi_goster(yasim);
return 0;
}
