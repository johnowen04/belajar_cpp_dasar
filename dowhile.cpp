#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 5;
    do
    {
        cout << "Ini i ke-" << i << endl; // Jalankan dulu
        i++;                              // Jalankan dulu
    } while (i < 5);                      // Baru cek variabelnya 5 == 5, 5 < 5? false


    // Kamu mau menghitung penjumlahan angka kurang dari 100,
    // kalau lebih dari atau samadengan 100 keluar dari loop dan keluarkan hasil

    // Kapan pakai do-while, saat kamu perlu hitung/proses dulu, baru cek kondisi.

    int j;

    cout << "Masukkan angka: ";
    cin >> j;

    do
    {
        int k;
        cout << "Masukkan angka selanjutnya: ";
        cin >> k;

        j += k;

        cout << j << endl;
    } while (j < 100);

    cout << j << endl;

    return 0;
}
