#include <iostream>  
using namespace std;

int main()
{
    int res1, res2;
    char l;
    setlocale(0, "");

    cout << "Введите первое число" << endl;
    cin >> res1;

    cout << "Введите второе число" << endl;
    cin >> res2;

    cout << "Введите действие, которое вы хотите выполнить (+  ,  *  ,  /  ,  %  или  -)" << endl;
    cin >> l;

    if (l == '-')
    {
        cout << res1 << " - " << res2 << " = " << res1 - res2;
    }
    else if (l == '+')
    {
        cout << res1 << " + " << res2 << " = " << res1 + res2;
    }
    else if (l == '*')
    {
        cout << res1 << " * " << res2 << " = " << res1 * res2;
    }
    else if (l == '/')
    {
        cout << res1 << " / " << res2 << " = " << res1 / res2;
    }
    else if (l == '%')
    {
        cout << res1 << " % " << res2 << " = " << res1 % res2;
    }
    else
        cout << "Я честно не помню что вы говорили сюда записывать , но вы написали не те действия которые есть в списке";
    return 0;

}