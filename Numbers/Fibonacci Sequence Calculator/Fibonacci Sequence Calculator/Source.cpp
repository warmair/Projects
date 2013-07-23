// Calculating the fibonacci sequence to n digits
//Simon Barlow 27.07.13

#include <cstdio>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int getanint();
void fibonacci(int length);

int main()
{
	int length = getanint();
	fibonacci(length);

	return 0;

}

int getanint()
{
	int value;
	cout << "what do you want?\n";
	cin >> value;
	cout << "OK!\n\n";

	while(value < 0 )
	{
		cout << "that value is invalid\nPlease give a new value:"<< endl;

		cin >> value;
	}

	return value;
}

void fibonacci(int length)
{
	int x = 0;
	int y = 1;
	vector<int> sequence;
	sequence.push_back(x);
	sequence.push_back(y);

	for (int i=0; i != length; i++)
	{
		x = sequence[i] + sequence[i+1];
		cout << x <<endl;
		sequence.push_back(x);
	}

}

