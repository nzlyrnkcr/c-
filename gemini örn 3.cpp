#include <iostream>
#include <string>
using namespace std;

class hayvan{
public:
    virtual void sesCikar(){
    cout<<"Hayvanlar ses cikarir."<<endl;
    }
    };
class kopek: public hayvan{
public:
    void sesCikar(){
    cout<<"Kopek havlar."<<endl;
    }
    };
class kedi: public hayvan{
public:
    void sesCikar(){
    cout<<"Kedi miyavlar."<<endl;
    }
    };
class kus: public hayvan{
public:
    void sesCikar(){
    cout<<"Kus cikler."<<endl;
    }
    };
int main(){
hayvan* o1;

kedi ke;
kopek ko;
kus ku;

o1=&ke;
o1->sesCikar();

o1=&ko;
o1->sesCikar();

o1=&ku;
o1->sesCikar();

return 0;
}
