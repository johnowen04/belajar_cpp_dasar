#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Looping paling simple - While loop
    int i = 5;
    while (i < 5)
    {                                     // Kondisinya dicek dulu baru baris 10 dijalankan 5 == 5, 5 < 5? false
        cout << "Ini i ke-" << i << endl; // Ini baris 10
        ++i;                              // i++, i+=1, tapi kalau lupa akan terjadi memory overflow
    }

    // Kamu mau menghitung penjumlahan angka kurang dari 100,
    // kalau lebih dari atau samadengan 100 keluar dari loop dan keluarkan hasil

    // Kapan pakai while, saat kamu perlu cek dulu sebelum hitung/proses

    int j;
    cout << "Masukkan angka: ";
    cin >> j;

    while (j < 100)
    {
        int k;
        cout << "Masukkan angka kedua: ";
        cin >> k;
        j += k;
        
        cout << j << endl;
    }

    cout << j << endl;



    return 0;
}
