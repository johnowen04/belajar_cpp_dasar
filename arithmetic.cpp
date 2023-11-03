#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

	// Operator aritmatika (+, -, *, /)
	int luas_persegi = x * y;
	int keliling_persegi = 2 * (x + y);
	int selisih_sisi = x - y;

    // 5 % 3 == sisanya dari pembagian 5 / 3 
	int x1;
	x1 = 5;
	
	x1 %= 3; // x1 = x1 % 3;
	cout << "Hasil modulo: " + to_string(x1) << endl;
	
    // increment
	++x;
	// x = (1 + x);
	
	x++;
	// temp = x;
	// x = temp + 1;
	// hasil: x = x + 1;
	
	// decrement
	--x;
	// x = (-1 + x);
	
	x--;
	// temp = x;
	// x = temp - 1;
	// hasil: x = x - 1;
	
	// For loop, while loop, do while dll.
	
    return 0;
}
