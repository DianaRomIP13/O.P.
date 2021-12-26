#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void func(int size, string* Array);
bool cheking(string* Array,int beginning, int i);

int main() {
    string* Array;
    int size;

    cout << "Enter the number of lines ";
    cin >> size;
    if (size <= 0) {
        cout << "Wrong value of size" << endl;
    }
    Array = new string[size];
    cin.ignore(); // видалення значення попереднього вводу із вхідного буфера
    cout << "Enter your code " << "\n";
    for (int i = 0; i < size; i++) {
        getline(cin, Array[i]); // введення даних із потоку
    }

    /*cout << "\n" << "Array: " << "\n"; // виведення масиву
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] = " << Array[i].c_str() << endl;
    }*/ 
    func(size, Array);
    delete[] Array;
}

void func(int size, string* Array) {
    string words = "";
    for (int i = 0; i < size; i++) {
        int beginning = Array[i].find_first_of('=', 0);
            if(cheking(Array, beginning, i)){
            beginning += 1;
            int end = Array[i].find_first_of(';', beginning) - 1;
            int sizeOfPhrase = end - beginning + 1;
            words += Array[i].substr(beginning, sizeOfPhrase) + "\n";
        }
    }
    cout << "Resalt:" << "\n" << words;
}

bool cheking(string* Array, int beginning, int i) {
    bool rule;
    rule = beginning + 1 < Array[i].length()
    && Array[i][beginning - 1] != '>' && Array[i][beginning - 1] != '<'
    && Array[i][beginning + 1] != '=';
    return rule;
}
