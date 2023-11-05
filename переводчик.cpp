#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int res;

    cout << "[1] Русский язык " << endl;
    cout << "[2] Английский язык" << endl;
    cout<< endl;

    cout << "[3] Выйти" << endl;
    cout<< endl;

    cin >> res;
    system("cls");


    switch (res)
    {
    case 1:
        cout << "Русский язык : " << endl << endl;

        cout << "[1] процесс обработки " << endl;
        cout << "[2] Манипулировать" << endl;
        cout << "[3] лето" << endl;
        cout << "[4] благодаря усилиям " << endl;
        cout<< "[5] продержаться до конца" << endl;
        cout << "[6] быть беде" << endl;
        cout<< "[7] пушистый" << endl;
        cout << "[8] Быть" << endl;
        cout << "[9] здоровый образ жизни" << endl;
        cout<< "[10] Кровать" << endl;
        cout << "[11] ланчбокс" << endl;
        cout << "[12] Коробка" << endl;
        cout << "[13] лев" << endl;
        cout << "[14] Помада" << endl;
        cout << "[15] консилер" << endl;
        cout<< endl;


        cin >> res;
        system("cls");

        switch (res)
        {
        case 1:
            cout << "процесс обработки -> processing process " << endl << endl;
            break;

        case 2:
            cout << "Манипилировать -> Manipulation" << endl << endl;
            break;

        case 3:
            cout << "лето -> summer" << endl << endl;
            break;

        case 4:
            cout << "благодаря усилиям -> due to the efforts" << endl << endl;
            break;

        case 5:
            cout << "продержаться до конца -> stick it to the end" << endl << endl;
            break;

        case 6:
            cout << "быть беде -> the fat is in the fire" << endl << endl;
            break;

        case 7:
            cout << "пушистый -> fluffy" << endl << endl;
            break;

        case 8:
            cout << "Быть - Be" << endl << endl;
            break;

        case 9:
            cout << " здоровый образ жизни -> healthy lifestyle " << endl << endl;
            break;

        case 10:
            cout << "Кровать -> Bed " << endl << endl;
            break;

        case 11:
            cout << "ланчбокс -> lunchbox" << endl << endl;
            break;

        case 12:
            cout << "Коробка -> Box" << endl << endl;
            break;


        case 13:
            cout << "лев ->  lion" << endl << endl;
            break;

        case 14:
            cout << "Помада -> Lipstick" << endl << endl;
            break;

        case 15:
            cout << "консилер -> concealer" << endl << endl;
            break;

        default:
            cout << "Выберите номер из списка" << endl << endl;
            break;
        }
        break;


    case 2:
        cout << "Английский язык";

        cout << "[1] processing process " << endl;
        cout << "[2] Manipulation" << endl;
        cout << "[3] summer" << endl;
        cout << "[4] due to the efforts " << endl;
        cout<< "[5] stick it to the end" << endl;
        cout << "[6] the fat is in the fire" << endl;
        cout << "[7] fluffy" << endl;
        cout << "[8] Be" << endl;
        cout << "[9] healthy lifestyle" << endl;
        cout<< "[10] Bed" << endl;
        cout << "[11] lunchbox" << endl;
        cout << "[12] Box" << endl;
        cout << "[13] lion" << endl;
        cout << "[14] Lipstick" << endl;
        cout << "[15] concealer" << endl;
        cout << endl;


        cin >> res;
        system("cls");

        switch (res)
        {
        case 1:
            cout << "processing process -> процесс обработки " << endl << endl;
            break;

        case 2:
            cout << " Manipulation -> Манипилировать" << endl << endl;
            break;

        case 3:
            cout << "summer -> лето" << endl << endl;
            break;

        case 4:
            cout << "due to the efforts -> благодаря усилиям" << endl << endl;
            break;

        case 5:
            cout << "stick it to the end -> продержаться до конца" << endl << endl;
            break;

        case 6:
            cout << "the fat is in the fire -> быть беде" << endl << endl;
            break;

        case 7:
            cout << "fluffy -> пушистый" << endl << endl;
            break;

        case 8:
            cout << " Be->  Быть" << endl << endl;
            break;

        case 9:
            cout << " healthy lifestyle -> здоровый образ жизни " << endl << endl;
            break;

        case 10:
            cout << " Bed -> Кровать " << endl << endl;
            break;

        case 11:
            cout << " lunchbox -> ланчбокс" << endl << endl;
            break;

        case 12:
            cout << " Box -> Коробка" << endl << endl;
            break;

        case 13:
            cout << "lion -> лев" << endl << endl;
            break;

        case 14:
            cout << "Lipstick -> Помада" << endl << endl;
            break;

        case 15:
            cout << "concealer -> консилер" << endl << endl;
            break;

        default:
            cout << "Выберите номер из списка" << endl;
            cout<< endl;
            break;



        }

        break;

    case 3:
        cout << "Поздравляю, живи!";   
        return 0;
        break;


    default:
        cout << "Выберите номер из списка" << endl;

    }
    return 0;


}