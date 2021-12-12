
#include <iostream>
#include <stdio.h>
#include <math.h>
#define M_PI 3.14

using namespace std;

int main()
{
    double a, b, h, x, Sum, Resn, Resn_1, eps, n;
    cout << "Enter eps";
    cout << "\n eps = "; cin >> eps;
    a = 0;
    b = M_PI;
    n = 10;
    h = (b - a) / n;
    x = a - h / 2;
    Resn = 0;
    Sum = 0;
    do
    {
        Resn_1 = Resn;
        do
        {
            Sum += log(2 + sin(x));
            x += h;
        } while (x < b);
        Resn = h * Sum;
        n = 2*n;
    } while (abs(Resn - Resn_1) >= eps);
    cout << "Result is " << Resn;
}

   