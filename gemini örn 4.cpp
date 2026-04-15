#include <iostream>
#include <string>
using namespace std;

class meyve{
protected:
    string adi;
    float fiyat;
public:
    void bilgileriAl(){
    cout<<"Lutfen alacaginiz meyvenin adini giriniz: "<<endl;
    cin>>adi;

    cout<<"Lutfen alacaginiz meyvenin birim fiyatini giriniz: "<<endl;
    cin>>fiyat;
    }
    void bilgileriGetir(){
    cout<<"Meyvenin adi: "<<adi<<endl;
    cout<<"Meyvenin birim fiyati: "<<fiyat<<endl;
    }
    };
class satis: public meyve{
private:
    float miktar;
public:
    void miktarAl(){
    cout<<"Lutfen alacaginiz miktari giriniz: "<<endl;
    cin>>miktar;
    }
    float toplamFiyat(){
    return fiyat*miktar;
    }
    void fiyatGetir(){
    cout<<"Toplam Fiyat= "<<toplamFiyat()<<endl;
    }
    };
int main(){
satis s1;

s1.bilgileriAl();
s1.miktarAl();
s1.bilgileriGetir();
s1.fiyatGetir();

return 0;
}
