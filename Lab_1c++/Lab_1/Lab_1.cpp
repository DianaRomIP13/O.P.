#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
#include <math.h>
#define M_PI 3.14
using namespace std;

int main() {
	double x1, x2, x3, y1, y2, y3;
	long double A, B, C, a, b, f;
	cout << "Enter the coordinates of the vertices of the triangle";
	cout << "\n x1= "; cin >> x1;
	cout << "\n x2= "; cin >> x2;
	cout << "\n x3= "; cin >> x3;
	cout << "\n y1= "; cin >> y1;
	cout << "\n y2= "; cin >> y2;
	cout << "\n y3= "; cin >> y3;
	A = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	B = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	C = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	a = (acos((B * B + C * C - A * A) / (2 * B * C))) * 180 / M_PI;
	b = (acos((A * A + C * C - B * B) / (2 * A * C))) * 180 / M_PI;
	f = (acos((B * B + A * A - C * C) / (2 * B * A))) * 180 / M_PI;
	cout << "Side A: " << A << " sm" << endl;
	cout << "Side B: " << B << " sm" << endl;
	cout << "Side C: " << C << " sm" << endl;
	cout << "Angle a: " << a << " degrees" << endl;
	cout << "Angle b: " << b << " degrees" << endl;
	cout << "Angle f: " << f << " degrees" << endl;
	return 0;
}

