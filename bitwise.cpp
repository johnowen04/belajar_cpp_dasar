#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Operasi and (&) = operasi *
	
	// 00000010 = 2
	int x2 = 2;
	
	// 00000100 = 4
	int x3 = 4;
	
	// 00000000 = 8-bit binary
	x2 &= x3; // x2 = x2 & x3
	
	// &, |, ^, <<, >>
	
	cout << x2 << endl; //00000010
	
	// Operasi or (|)
	
	// 00000100 0 dan 1
	int x4 = 4;
	
	// 00000101
	int x5 = 5;
	
	// 00000101
	x4 |= x5;
	
	cout << x4 << endl; //00000101 = 5
    return 0;
}
