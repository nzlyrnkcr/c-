#include <iostream>
#include <string>
using namespace std;

class calisan{
protected:
    string ad;
    float maas;
public:
    void bilgial(){
        cout<<"Lutfen adinizi giriniz: "<<endl;
        cin>>ad;

        cout<<"Lutfen maasinizi giriniz: "<<endl;
        cin>>maas;
    }
    void bilgiyigetir(){
    cout<<"AD= "<<ad<<endl;
    cout<<"MAAS= "<<maas<<endl;
    }
    };
class yonetici: public calisan{
private:
    float prim;
public:
    void primal(){
    cout<<"Prim miktarini giriniz: "<<endl;
    cin>>prim;
    }
    float primmaas(){
    return prim+maas;
    }
    void toplammaas(){
    cout<<primmaas();
    }
    };
int main(){
yonetici y1;

y1.bilgial();
y1.primal();
y1.bilgiyigetir();

cout<<"Toplam Maas= ";
y1.toplammaas();
return 0;
}
