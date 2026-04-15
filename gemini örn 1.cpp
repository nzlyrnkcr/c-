#include <iostream>
#include <string>
using namespace std;

class ogrenci{
private:
    string adi;
    int notu;
public:
    ogrenci(string a, int n){
    adi=a;
    notu=n;
    }
    string adiAl(){
    return adi;
    }
    int notuAl(){
    return notu;
    }
    };
int main(){
ogrenci* notlar[5];
string adi;
int notu;

for(int i=0; i<5; i++){
    cout<<"Lutfen ogrencinin adini giriniz: "<<endl;
    cin>>adi;

    cout<<"Lutfen ogrencinin notunu giriniz: "<<endl;
    cin>>notu;

    notlar[i]= new ogrenci(adi,notu);
}

int maxnot=0;

for(int i=1; i<5; i++){
    if(notlar[i]->notuAl()>notlar[maxnot]->notuAl()){
        maxnot=i;
    }
}

cout<<"En yuksek puan alan ogrenci: "<<endl;
cout<<"Adi= "<<notlar[maxnot]->adiAl()<<endl;
cout<<"Notu= "<< notlar[maxnot]->notuAl()<<endl;
return 0;
}


