#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, my name is Karlo and I'm going to solve the equation: \nAx + B = 0 \nFor x\n";
	cout << "\nPlease enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "\nSolving " << A << "x+" << B << "=0 for x...\n";
	X = (0 - B) / A;
	cout << "\nThe answer is: \n";
	cout << "x=" << X << "\n";
}