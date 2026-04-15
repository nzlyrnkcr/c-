#include <iostream>
#include <string>
using namespace std;

class kisi{
private:
string ad;
int yas;

public:
    kisi(string isim, int yasim):ad(isim), yas(yasim){
    cout<<ad<<"'nin yasi "<<yas<<endl;
    }};
int main(){
kisi("Nazli",19);
return 0;
}
