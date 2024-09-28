// Projecttttt 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <stdio.h>
#include <string>
using namespace std;

string formatAngka(int angka) {
    string hasil = std::to_string(angka);
    int len = hasil.length();

    for (int i = len - 3; i > 0; i -= 3) {
        hasil.insert(i, ".");
    }

    return hasil;
}

int main()
{
    float hargaBarang = 150000;
    float diskon = 12.5;

    float hargaDiskon = hargaBarang * (diskon / 100);
    float hasilSetelahDiskon = hargaBarang - hargaDiskon;

    //printf("Harga, %s", formatAngka(hargaBarang));
    cout << "Harga: " << "Rp" << formatAngka(hargaBarang) << endl;
    cout << "Diskon: " << diskon << "%" << endl;
    cout << "Besarnya diskon dari harga: " << "Rp" << formatAngka(hargaDiskon) << endl;
    cout << "Harga setelah diskon: " << "Rp" << formatAngka(hasilSetelahDiskon) << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
