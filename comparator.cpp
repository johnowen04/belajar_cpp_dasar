#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x6 = 20;
    int x7 = 20;

    string name1 = "Steven";
    string name2 = "Steven";

    int umur1 = 14;
    int umur2 = 21;

    cout << "Comparator operator" << endl;
    cout << (x6 == x7) << endl;
    cout << (x6 != x7) << endl;
    cout << (x6 < x7) << endl;
    cout << (x6 > x7) << endl;
    cout << (x6 >= x7) << endl;
    cout << (x6 <= x7) << endl;

    cout << (name1 == name2) << endl;

    if ((name1 == name2) || (umur1 == umur2))
    {
        cout << "Namanya atau umur sama" << endl;
    }
    else
    {
        cout << "Namanya berbeda" << endl;
    }

    string hasil = (name1 == name2) ? "Namanya sama" : "Namanya berbeda";
    cout << hasil << endl;

    return 0;
}
