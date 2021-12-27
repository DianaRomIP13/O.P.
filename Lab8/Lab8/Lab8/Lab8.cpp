#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Sum(int** Array, int i, int j, int n);
int fillArray(int** Array, int n);
int min(int** Array, int* Array2, int n);
int main(){
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
    int** Array = new int*[n];
    for (int i = 0; i < n; i++) {
        Array[i] = new int[n];
    }
    int* Array2 = new int[n];
    fillArray(Array, n);
    min(Array, Array2, n);
    cout << "Vector A: ";
    for (int i = 0; i < n; i++) {
        cout << Array2[i] << "; ";
    }
    return 0;
}

int fillArray(int** Array, int n) {
    int a = -10;
    int b = 10;
    srand(time(0));
    cout << "Elements: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Array[i][j] = rand() % (b - a + 1) + a;
            cout << Array[i][j] << "\t";
        }
        cout << "\n ";
    }
    return 0;
}
int min(int** Array, int* Array2, int n) {
    int k = 0;
    cout << "Min elements : " << "\n";
    for (int i = 0; i < n; i++) {
        int min = Array[i][0];
        for (int j = 0; j < n; j++) {
            if (Array[i][j] <= min) {
                min = Array[i][j];
                k = j;
                Array2[i] = Sum(Array, i, j, n);
            }
        }
        //Array2[i] = min;
        cout << " " << min;
        cout << "  in column " << k + 1 << "\n";
    }
    return 0;
}

int Sum(int** Array, int i, int j, int n){
         int Res = 0;
            for (int l = 0; l < n; l++) {
                Res += Array[i][l] + Array[l][j];
            }
            return Res;
}
