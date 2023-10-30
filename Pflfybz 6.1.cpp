#include<iomanip>
#include <iostream>
using namespace std;
int main()
{
    int tablicha[9][9];
    setlocale(0, "");

    for (int i = 0; i < 9; i++)
    {
        for (int k = 0; k < 9; k++)
        {
            tablicha[i][k] = (i + 1) * (k + 1);
        }
    }


    for (int i = 0; i < 9; i++)
    {
        for (int k = 0; k < 9; k++)
        {
            cout << setw(4) << tablicha[i][k] << " ";
        }
        cout << endl;
    }

        return 0;
   

}
