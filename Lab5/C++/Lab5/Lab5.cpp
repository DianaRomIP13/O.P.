
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int Num, RevsNum, Num2;
    for ( Num = 1000; Num <= 9999; Num++){
        Num2 = Num;
        RevsNum = 0;
        while ( Num2>0)
        {
            RevsNum = RevsNum*10 + Num2%10;
            Num2 /= 10;
        }
        if (Num == RevsNum)
        {
            cout << "\n" << Num;
        } 
    } 
}
