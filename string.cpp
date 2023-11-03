#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string firstName = "Steven";
    cout << firstName << endl;

    // String concatenation

    string lastName = "Lim";
    string fullName = firstName + lastName;
    cout << fullName << endl;

    fullName = firstName + " " + lastName;
    cout << fullName << endl;

    // cout << "Masukkan first name:  ";
    // cin >> firstName;

    // cout << "Masukkan last name: ";
    // cin >> lastName;

    fullName = firstName.append(lastName);
    cout << fullName << endl;

    firstName = "Steven ";
    fullName = firstName.append(lastName);
    cout << fullName << endl;

    // String length
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int alphabetLength = alphabet.length();
    cout << "Alphabet length: " << alphabetLength << endl;

    cout << "Berapa huruf nama user? " << fullName.length() << endl ;

    string nama = "Steven";
    // string = array of character

    // indeks itu mulai dari satu (1)
    // array => ["S", "t", "e", "v", "e", "n"]; // panjangnya enam (6)
    // index => [ 1,   2,   3,   4,   5,   6 ]; // index terakhir enam (6) (a)

    // indeks itu mulai dari nol (0)
    // array => ["S", "t", "e", "v", "e", "n"]; // panjangnya enam (6)
    // index => [ 0,   1,   2,   3,   4,   5 ]; // index terakhir lima (5) (b)

    // b = a - 1
    // indeks_terakhir = panjang_total - 1;

    cout << nama[0];
    cout << nama[nama.length() - 1] << endl;

    // Special character: , . / ; [] "" '' `` @
    cout << "\'" << endl; // \ << ini

    // User input string
    string anotherName;
    cout << "Masukkan nama panjang: ";

    // cin >> anotherName; // Steven (sudah masuk) Lim (belum masuk)
    // cout << anotherName << endl; // Steven

    // kebanyakan hanya untuk string
    getline(cin, anotherName); // Steven Lim (baru masuk di sini)
    cout << anotherName << endl; // Steven Lim

    return 0;
}
