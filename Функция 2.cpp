#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите число n: ";
    cin >> n;

    while (n >= 10) {
        int t = 0;
        while (n != 0)
        {
            t  =t + n % 10;
            n =n / 10;
        }
        n = t;
    }

    cout << "Однозначное число: " << n << endl;

    return 0;
}