#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // String concatenation cout
    int r = 3;
    float pi = 3.14;
    
	cout << "Luas lingkaran dengan jari-jari " + to_string(r) + " = " + to_string(pi * r * r) << endl;
	
    return 0;
}
