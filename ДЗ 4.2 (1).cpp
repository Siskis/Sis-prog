#include <iostream> 
#include <string> 
using namespace std;

int main() {
    setlocale(0, "");
    int menu, size, num , length_1, length_2;
    string symbol;
    char prob = '|';
    cout << "Выберите фигуру\n [1]Линия\n [2]Прямоугольник\n [3]Квадрат\n [4]Треугольник\n";
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:

        cout << "Какую линию вы хоите провести \n [1] Вертикальную \n [2] Горизонтальную \n";
        cin >> menu;
        system("cls");
        if (menu == 1) 
        {
            system("cls");

            cout << "Выберите длину линии\n";
            cin >> size;
            cout << "Из какого символа будет линия\n";
            cin >> symbol;

            system("cls");
            cout << endl << endl << endl;
            for (int i = 0; i <= size; i++)
            {
                cout << symbol << endl;
            }
            cout << endl << endl << endl;
        }
        else if (menu == 2) 
        {
            system("cls");

            cout << "Выберите длину линии\n";
            cin >> size;
            cout << "Из какого символа будет линия\n";
            cin >> symbol;

            system("cls");
            cout << endl << endl << endl;
            for (int i = 1; i <= size; i++)
            {
                cout << symbol;
            }
            cout << endl << endl << endl;
        }
        else 
        {
            cout << "НЕКОРЕКТНЫЕ ДАННЫЕ" << endl;
        }
    break;


    case 2:
        cout << "Выберите тип прямоугольника\n[1]Заполненный\n[2]Пустой\n";
        cin >>num;
        system("cls");

        if (num == 1)
        {
            cout << "Введите первую длину прямоугольника\n";
            cin >> length_1;
            system("cls");

            cout << "Введите вторую длину прямогульника\n";
            cin >> length_2;
            system("cls");
            cout << "Из какого симводла будет прямоугольник\n";
            cin >> symbol;
            system("cls");

            for (int i = 1; i <= length_2; i++)
            {
                for (int i = 1; i <= length_1; i++)
                {
                    cout << symbol << " ";
                }
                cout << endl;
            }
        }
        else if (num==2) 
        {
            cout << "Введите первую длину прямоугольника\n";
            cin >> length_1;
            system("cls");

            cout << "Введите вторую длину прямогульника\n";
            cin >> length_2;
            system("cls");
            cout << "Из какого симводла будет прямоугольник\n";
            cin >> symbol;
            system("cls");
            for (int i = 1 ; i <= length_1 ; i++) 
            {
                cout << symbol << " ";
            }
            cout << endl;


            for (int i = 1; i <= (length_2 - 2); i++)
            {
                cout << symbol;
                for (int i = 1 ; i<= (length_1 - 2) ; i ++)
                {
                    cout << prob << " ";
                }
                cout << " " << symbol << endl;
            }


            for (int i = 1; i <= length_1; i++)
            {
                cout << symbol << " ";
            }
            cout << endl;
        }

        break;


    case 3:
        cout << "Выберите тип квадрата \n[1]Заполненный\n[2]Пустой\n";
        cin >> num;
        system("cls");

        if (num == 1) 
        {
            cout << "Введите размер стороны квадрата\n";
            cin >> size;
            system("cls");
            cout << "Из какого симводла будет квадрат\n";
            cin >> symbol;
            system("cls");
            for (int i = 1; i <= size; i++)
            {
                for (int i = 1; i <= size; i++)
                {
                    cout << symbol << " ";
                }
                cout << endl;
            }
        }
        else if (num ==2) 
        {
            cout << "Введите размер стороны квадрата\n";
            cin >> size;
            system("cls");
            cout << "Из какого симводла будет квадрат\n";
            cin >> symbol;
            system("cls");


            for (int i = 1; i <= size; i++)
            {
                cout << symbol << " ";
            }
            cout << endl;


            for (int i = 1; i <= (size -2); i++)
                {
                cout << symbol;
                    for (int i = 1; i <= (size - 2); i++)
                    {
                        cout << prob << " ";
                    }
                    cout << " " << symbol;
                cout << endl;
                }
            for (int i = 1; i <= size; i++)
            {
                cout << symbol << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "НЕКОРЕКТНЫЕ ДАННЫЕ" << endl;
        }
        break;

    case 4:
        /*cout << "Выбеите тип треугольника\n [1]Заполненный\n[2]Пустой\n";
        cin >> num;
        system("cls");
        if (num == 1) 
        {
            cout << "Ввежите размер стороны треугольника\n";
            cin >> size;
            cout << "Из какого символа будет треугольник\n";
            cin >> symbol;
            system("cls");

            for (int i = 0 ; i <= size ; i++) 
            {
                cout << symbol;
            }

        }
        else if (num == 2) 
        {

        }
        break;

*/

    default:
        cout << "НЕКОРЕКТНЫЕ ДАННЫЕ" << endl;
        break;
    }

    return 0;
}