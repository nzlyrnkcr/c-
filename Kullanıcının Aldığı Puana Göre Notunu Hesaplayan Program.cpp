#include <iostream>
using namespace std;
int main(){
float mat1;

cout<<"Matematik1 dersindeki puan ortalamanizi giriniz:"<<endl;
cin>>mat1;

if(mat1<0){
    cout<<"Gecersiz Not!"<<endl;
}
else if(0<=mat1 && mat1<50){
    cout<<"FF"<< endl;
}
else if(50<=mat1 && mat1<60){
cout<<"CC"<<endl;
}
else if(60<=mat1 && mat1<70){
    cout<<"CB"<<endl;
}
else if(70<=mat1 && mat1<80){
    cout<<"BB"<<endl;
}
else if(80<=mat1 && mat1<90){
    cout<<"BA"<<endl;
}
else{
    cout<<"AA"<<endl;
}
return 0;
}
