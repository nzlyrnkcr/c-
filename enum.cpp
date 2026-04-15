#include <iostream>
#include <string>
using namespace std;

enum hafta{
     Pazartesi,
     Sali,
     Carsamba,
     Persembe,
     Cuma,
     Cumartesi,
     Pazar,
     };
int main(){
    hafta bugun;
    bugun= Sali;

cout<<"Sali haftanin "<<bugun+1<<". gunu."<< endl;
return 0;
}
