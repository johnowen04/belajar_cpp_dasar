#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Conditional if-else

    if (true) {
        // do something
    } else {

    }

    if (true) {
        // langsung tulis disini
        // do something
    } else if (true && false) {
        // do something else
    } else {

    }

    int nilai = 80;

    if (nilai < 70) { // 1 .. 69
        cout << "Cukup" << endl;
    } else if (nilai < 80) { // 70, 71, 72, .. 79
        cout << "Cukup Baik" << endl;
    } else if (nilai < 90) { // 80, .. 89
        cout << "Baik" << endl;
    } else { // 90, ... 100
        cout << "Sangat Baik" << endl;
    }

    // Conditional switch-case

    int number = 3;

    switch (number % 2) {
        case 0:
            // print genap karena angka habis dibagi 2 adalah genap
            cout << "Genap" << endl;
            // if-else, asignment, aritmatika, dll
            break;
        default:
            // selain genap adalah ganjil
            cout << "Ganjil" << endl;
    }

    int hari_dalam_angka;

    cout << "Masukkan hari: ";
    cin >> hari_dalam_angka;

    string hari_dalam_string;

    switch (hari_dalam_angka) { // scope mulai switch
        case 1:
            hari_dalam_string = "Senin";
            break;
        case 2:
            hari_dalam_string = "Selasa";
            break;
        case 3:
            hari_dalam_string = "Rabu";
            break;
        case 4:
            hari_dalam_string = "Kamis";
            break;
        case 5:
            hari_dalam_string = "Jumat";
            break;
        case 6:
            hari_dalam_string = "Sabtu";
            break;
        default:
            hari_dalam_string = "Minggu";
    } // scope akhir switch

    cout << hari_dalam_string << endl;

    return 0;
}
