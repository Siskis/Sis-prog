#include <iostream>
#include <cmath>//библиотека математических функций для C++.
using namespace std;
int main() 
{
    setlocale(0, "");
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

   cout << "Числа, представимые в виде суммы квадратов двух натуральных чисел до " << n << ":"<< endl;

    for (int i = 1; i <= n; ++i) //переборка всех чисел от 1 до n.
    {
        for (int j = 1; j <= i; ++j) //все числа от 1 до текущего значения внешнего цикла.
        {
            int sum = i * i + j * j;

            
            int SR = sqrt(sum);// Проверка, является ли sum полным квадратом
            if (SR * SR == sum && sum <= n)
            {
                cout << sum << " = " << i << "^2 + " << j << "^2" << endl;
            }
          
            
        } 
    }

    return 0;
}