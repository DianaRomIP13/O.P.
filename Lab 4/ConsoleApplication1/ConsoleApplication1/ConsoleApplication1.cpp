

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double n, Res;
    cout << "Enter n";
    cout << "\n n = ";  cin >> n;
    Res = 0;
    for (double i = 0; i <= n-1; i++) {
        Res = sqrt(Res + 2);
    }
    cout << "Result is " << Res;
}

