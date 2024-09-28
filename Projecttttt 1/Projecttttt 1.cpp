#include <iostream>
//#include <stdio.h>
#include <string>
using namespace std;

string formatAngka(int angka);

int main()
{
    float hargaBarang = 150000;
    float diskon = 12.5;

    float hargaDiskon = hargaBarang * (diskon / 100);
    float hasilSetelahDiskon = hargaBarang - hargaDiskon;

    //printf("Harga, %s", formatAngka(hargaBarang));
    cout << "Harga: " << formatAngka(hargaBarang) << endl;
    cout << "Diskon: " << diskon << "%" << endl;
    cout << "Besarnya diskon dari harga: " << formatAngka(hargaDiskon) << endl;
    cout << "Harga setelah diskon: " << formatAngka(hasilSetelahDiskon) << endl;

    return 0;
}

string formatAngka(int angka) {
    string hasil = std::to_string(angka);
    int len = hasil.length();
    for (int i = len - 3; i > 0; i -= 3) {
        hasil.insert(i, ".");
    }
    hasil = "Rp." + hasil;
    return hasil;
}

