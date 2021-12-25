#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double fillArray(int n, double* Array);
double Sort(int n, double* Array);
double Sum(int n, double* Array);

int main()
{
    int n;
    cout << "Enter the size of the array: "; //Введення розміру масива
    cin >> n;
    double* Array = new double[n];

    fillArray(n, Array);
    Sort(n, Array);
    Sum(n, Array);
   
}
double fillArray(int n, double* Array) {
    int min;
    int a = -10;
    int b = 10;
    srand(time(0));
    cout << "Array elements: "; // Елементи масива
    for (int i = 0; i < n; i++) {
        Array[i] = (double)(rand() % (b * 100 - a * 100 + 1) + a * 100) / 100;
        cout << Array[i] << "; ";
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (Array[i] < Array[j])
            {
                min = Array[i];
                Array[i] = Array[j];
                Array[j] = min;
            }
        }
    }
    return 0;
}

double Sort(int n, double* Array) {
    cout << "\nSort descending: "; //сортування за спаданням
    for (int i = 0; i < n; i++) {
        cout << Array[i] << "; ";
    }
    return 0;
}
double Sum(int n, double* Array) {
    double Sum = 0;
    cout << "\nThe sum of the elements of an ordered array in even positions: "; //сума елементів впорядкованого масива на парних позиціях
    for (int i = 0; i < n; i++) {
        if ((i % 2) == 1) {
            Sum += Array[i];
        }
    }
    cout << Sum;

    return 0;
}