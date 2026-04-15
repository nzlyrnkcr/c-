#include <iostream>
#include <string>
using namespace std;

class Arac {
protected:
    string marka;
    int modelYili;

public:
    Arac(string m, int yil) {
        marka = m;
        modelYili = yil;
    }

    void bilgileriGoster() {
        cout << "Marka: " << marka << endl;
        cout << "Model Yili: " << modelYili << endl;
    }
};
class Otomobil : public Arac {
private:
    int kapiSayisi;

public:
    Otomobil(string m, int yil, int kapi) : Arac(m, yil) {
        kapiSayisi = kapi;
    }

    void otomobilBilgisiYazdir() {
        bilgileriGoster();
        cout << "Kapi Sayisi: " << kapiSayisi << endl;
    }
};

int main() {
    Otomobil benimArabam("Toyota", 2023, 4);

    cout << "--- Otomobil Bilgileri ---" << endl;
    benimArabam.otomobilBilgisiYazdir();

    return 0;
}
