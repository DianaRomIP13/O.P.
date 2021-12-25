
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

double func(double x);
double factorial(double N);

int main()
{
	cout << "Enter a = ";
	double a, Y;
	cin >> a;
	Y = (2 * func(0.5) - 3 * func(a - 0.1) / 5 * func(4 * a - 1));
	cout << "Y = " << (round(Y * 100) / 100) << endl; // округлення результату до сотих
}

double factorial(double N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * factorial(N - 1);
}

double func(double x) {
	double Sum = 0, k = 0;
	for (int k = 0; k <= 20; k++) {
		Sum += (pow(x, (2 * k + 1)) / factorial(2 * k + 1)) / (pow(x, (2 * k)) / factorial(2 * k));
	}
	return Sum;
}
