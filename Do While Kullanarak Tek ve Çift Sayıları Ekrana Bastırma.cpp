#include <iostream>
using namespace std;
int main() {
int i = 0, j = 1;

cout << "Cift Sayilar: ";
do {
    cout << i << " ";
    i += 2;
    }
while(i <= 8);

cout << "\nTek Sayilar: ";
do {
    cout << j << " ";
    j += 2;
    }
while(j <= 9);
return 0;
}
