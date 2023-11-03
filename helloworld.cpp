// Import
#include <iostream>
// Input-Output Stream
// #include <nama-lib>

/* ketik komentar
ini dihitung sbg komentar
ini juga
sampai sini */

// Using
using namespace std;

// Function main

int main()
{
	// Input (cin)
	// Output (cout)
	// variabel
	// angka, huruf, kata (tipe data)
	// operasi comparator
	// increment
	// operasi aritmatika
	// switch / conditional

	// Membuat kalkulator dua angka sederhana
	// 1. Tanyakan mau hitung apa? (+, -, /, *)
	// 2. Penjumlahan, angka pertama berapa?
	// 3. Angka kedua berapa?
	// 4. Keluarkan hasilnya

	// (Opsional) Membuat kalkulator hitung luas bidang datar (lingkaran, persegi, persegi panjang)
	// 1. Tanyakan mau hitung apa? (lingkaran, persegi, persegi panjang)
	// 2. Penjumlahan, angka pertama berapa?
	// 3. Angka kedua berapa?
	// 4. Keluarkan hasilnya

	// kerjakan di sini...

	float a, b, c;
	char aritmatika;

	cout << "Welcome To Calculator " << endl;

	// Input Value//
	cout << "Enter First Value: ";
	cin >> a;
	cout << "What Operation +,-,*,/ :";
	cin >> aritmatika;
	cout << "Enter Second Value: ";
	cin >> b;

	cout << "Result: ";
	cout << a << aritmatika << b;

	if (aritmatika == '+')
	{
		c = a + b;
	}
	else if (aritmatika == '-')
	{
		c = a - b;
	}
	else if (aritmatika == '/')
	{
		c = a / b;
	}
	else if (aritmatika == '*')
	{
		c = a * b;
	}

	cout << " = " << c << endl;

	// Lanjut hitung lagi? Tidak => exit (selesai program)
	// Ya => Lanjut masuk ke awal lagi, masukkan first value, dll

	return 0;
}
