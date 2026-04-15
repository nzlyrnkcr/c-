#include <iostream>
#include <string>
using namespace std;

class kitap{
private:
    string ad;
    int sayfa;
public:
    kitap(string a, int s){
    ad=a;
    sayfa=s;
    }
    string kitabinAdi(){
    return ad;
    }
    int sayfaSayisi(){
    return sayfa;
    }
    };
int main(){
string ad;
int sayfa;
kitap* kitaplar[3];

for(int i=0; i<3; i++){
    cout<<"Lutfen kitabin adini giriniz: "<<endl;
    cin>>ad;
    cout<<"Lutfen kitabin sayfa sayisini giriniz: "<<endl;
    cin>>sayfa;

    kitaplar[i]= new kitap(ad,sayfa);
}
int maxsayfa=0;

for(int i=1; i<3; i++){
    if(kitaplar[i]->sayfaSayisi()> kitaplar[maxsayfa]->sayfaSayisi()){
        maxsayfa=i;
    }
}
cout<<"En cok sayfasi olan kitap:"<<endl;
cout<<"Adi= "<< kitaplar[maxsayfa]->kitabinAdi()<<endl;
cout<<"Sayfa Sayisi= "<<kitaplar[maxsayfa]->sayfaSayisi()<<endl;
return 0;
}
