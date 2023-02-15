/* C++ Program to demonstrate use of left shift
operator */
#include <iostream>
using namespace std;

int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00001010
	cout <<"a<<1 = "<< (a>>1) << endl; // Right shift operator
	
	// The result is 00010010
	cout <<"b<<1 = "<< (b<<0) << endl;  // left shift operator
	return 0;
}

// This code is contributed by shivanisinghss2110