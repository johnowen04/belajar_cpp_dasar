#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // Bilangan Bulat
    int a = 30;
    long b = 50;
    short c = 60;

    // Bilangan decimal (ada komanya)
    double d = 20.7;
    float e = 3.14;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    char f = 'f';
    string name = "Steven";
    char g[] = "Steven";

    cout << f << endl;
    cout << name << endl;
    cout << g << endl;

    bool h = true;  // 1
    bool i = false; // 0

    bool j = 1;
    bool k = 0;

    cout << h << endl;
    cout << i << endl;

    int l = 10, m = 20, n = 30;

    // 3 angka; l+m+n
    cout << l + m + n << endl;

    const float pi = 3.1415;

    int r = 3;
    return 0;
}
