// Задание 5.cpp 

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int arrInt[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "тип данных массив int" << endl;
    for(int i=0;i<10; i++)
     {
        cout << " " << arrInt[i] << endl;
     }
   
    short arrShort[10] = { -3, -4, -7, -2, 4, 9, 8, 5, -8, 6 };
    cout << "тип данных массив Short" << endl;
    for (int i =0 ; i<10; i++)
    {
        cout << " " << arrShort [i] << endl;
    }
   
    long arrlong[10] = { -2999, -4848, 12, 4332, 043, 88,-99, 7328, -11, 23 };
    cout << "тип данных массив long" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arrlong[i] << endl;
    }

    float arrfloat[10] = { 2.7, 9.3, 5.6, 1.2, 8.4, 4.8, 3.7, -4.7, 8.9, 4.2 };
    cout << "тип данных массив float" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arrfloat[i] << endl;
    }
    double arrdouble[10] = { 2.989, 6.45654, 3.88, -8.4565, -7.65, 9.98, 2.79, 4.33, 6.22, -33.44 };
    cout << "тип данных массив double" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arrdouble[i] << endl;
    }
    char arrchar[10] = { 'a', 'd', 's','e','u','p','t','n', 'x', 'o'};
    cout << "тип данных массив char" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arrchar[i] << endl;
    }
    bool arrbool[10] = { true , true , true , true , true , true , true , true , true , true };
    cout << "тип данных массив bool" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << " " << arrbool[i] << endl;
    }
    return 0;
}

