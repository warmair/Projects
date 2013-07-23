// Trying to find pi to the nth digit
//Simon Barlow 23.07.13

#include <cmath>
#include <iostream>
#include <limits>

using namespace std;

int main()
{
	for(int x=1; x!=10; x++)     // Start counting through values for x
	{
	int y = x - x^3/3 + x^5/5;   //y will be arctan'd x is just based on the for value
	cout << atan(y) * 4 << "\n";
	}

	std::cout << "Press ENTER to continue...";
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );

  return 0;
}
