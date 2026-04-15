#include <iostream>
#include <string>
using namespace std;

class odeme{
public:
    virtual void odemeyap(){
    cout<<"Genel odeme islemi"<<endl;
    }
    };
class nakit: public odeme{
public:
    void odemeyap(){
    cout<<"Nakit odeme yapildi."<<endl;
    }
    };
class kredikarti: public odeme{
public:
    void odemeyap(){
    cout<<"Kredi kart ile odeme yapildi."<<endl;
    }
    };
class havale: public odeme{
public:
    void odemeyap(){
    cout<<"Havale yapilmistir."<<endl;
    }
    };
int main(){
odeme* o1;
kredikarti k;
nakit n;
havale h;

o1=&k;
o1->odemeyap();

o1=&n;
o1->odemeyap();

o1=&h;
o1->odemeyap();
return 0;
};
