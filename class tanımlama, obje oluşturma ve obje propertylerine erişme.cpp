#include <iostream>
#include <string>
using namespace std;

class oda{
public:
    double kisakenar;
    double uzunkenar;
    double yukseklik;

    double alan(){
    return yukseklik*kisakenar*uzunkenar;
    }
    double metrekare(){
    return kisakenar*uzunkenar;
    }};
int main(){
 oda benimodam;
 cout<<"Kisa kenari giriniz: "<<endl;
 cin>>benimodam.kisakenar;
 cout<<"Uzun kenari giriniz: "<<endl;
 cin>>benimodam.uzunkenar;
 cout<<"Yuksekligi giriniz: "<<endl;
 cin>>benimodam.yukseklik;

 cout<<"Odanin metrekaresi= "<<benimodam.metrekare()<<endl;
 cout<<"Odanin alani= "<<benimodam.alan()<<endl;

 return 0;}
