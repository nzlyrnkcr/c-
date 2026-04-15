#include <iostream>
using namespace std;

class sicaklik {
private:
    float sicaklikDegeri;

public:
    void setSicaklik() {
        cout << "Lutfen sicaklik degerini giriniz: ";
        cin >> sicaklikDegeri;

        if (sicaklikDegeri < -273) {
            cout << "Gecersiz sicaklik degeri!" << endl;
            sicaklikDegeri = -273;
        }
    }

    float getSicaklik() {
        return sicaklikDegeri;
    }
};

int main() {
    sicaklik s1;

    s1.setSicaklik();

    cout << "Sicaklik: " << s1.getSicaklik() << endl;

    return 0;
}
