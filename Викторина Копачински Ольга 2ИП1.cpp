#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    srand(time(NULL));
    system("cls");
    setlocale(0, "");
    int menu;
    const int QUESTIONSIZE = 30;
    const int ANSWERSIZE = 4;
    int questionsCount = 10;
    int livesCount = 3;
    bool fiftyFifty = false;
    int intfiftyFifty;
    int gameTime = 5;
    int UserAnswer;
    string PravilnAnswell[QUESTIONSIZE]
    {
        "в 1789-1799 годах" ,
        "ом " ,
        "Samsung " ,
        "Янцзы" ,
        "Бангладеш" ,
        "железо" ,
        "Россия" ,
        "Пиро" ,
        "70-мм IMAX" ,
        "Дуб" ,
        "Мальта" ,
        "Исландия" ,
        "Сейлор Мун" ,
        "Полу-вампиром" ,
        "печень" ,
        "Паруса в тумане" ,
        "треугольник" ,
        "Лев Толстой" ,
        "<Преступление и наказание>" ,
        "Амазонка" ,
        "Золото" ,
        "Северная Корея" ,
        "Непал" ,
        "Святой Павел" ,
        "Джати" ,
        "4" ,
        "Брахма" ,
        "1939 год" ,
        "Брахма" ,
        "Музыка"

    };
    string question[QUESTIONSIZE]
    {
        " Когда произошло Великое французское революционное движение? " ,
        " Какое измерение используется для измерения электрического сопротивления?",
        " Какая компания является крупнейшим производителем смартфонов в Южной Корее? ",
        " Какая река является самой длинной в Азии? ",
        " Какая страна Азии имеет самую высокую плотность населения?",
        " Какой металл является самым распространенным в земной коре?  ",
        " Какая страна Азии является самой крупной по территории?  ",
        " Какой элемент у Дилюка? ",
        " На какую пленку был снят фильм Оппенгеймер? ",
        " Какое дерево используется для изготовления коньячных бочек? ",
        " В какой европейской стране нет постоянных рек и озер? ",
        " В какой европейской стране вас не могут покусать комары?",
        " Назовите самое продолжительное аниме в жанре махо-сёдзё?",
        " Кем является Мия на протяжении истории? Рождённая луной. ",
        " Какой орган является самым большим в человеческом организме? ",
        " Какая история является самой старой ? ",
        " Какую фигуру изобразил Леонардо да Винчи в своей картине Тайная вечеря? ",
        " Кто является автором произведения Война и мир ",
        " Какая из следующих книг является произведением Фёдора Достоевского? ",
        " Какая самая длинная река в мире? ",
        " Какой химический элемент обладает атомным номером 79? ",
        " Какая страна на севере граничит с Южной Кореей?",
        " В какой стране Азии расположен Гималаи? ",
        " Собор какого христианского святого находится в Калькутте?",
        " Как называются касты в Индии? ",
        " На сколько варн разделено индийское общество? ",
        " Какой бог согласно мифу разделил индийское общество на сословия? ",
        " Когда началась Вторая мировая война? ",
        " Какая варна считается высшей? ",
        " Какое из этих искусств не относится к изобразительному искусству? ",

    };
    string answer[QUESTIONSIZE][ANSWERSIZE]
    {
        {"в 1789-1799 годах" , " в 1905-1917 годах  ","   в 1945-1949 годах  ", "в 1500-1520 годах"},
        {" вольт " ,  "ампер  " , "ом " ,  "герц"},
        {"Apple ",   "Samsung  " , " Huawei  ", "Nokia"},
        {"Янцзы" , "Амур "  ,"Меконг ", "День Защитника Отечества"},
        {"Сингапур " , "Бангладеш " ,"Япония " ,"Виниловый проигрыватель"},
        {"железо " , "алюминий " , "медь " , "свинец"},
        {"Китай " , "Россия " , "Индия " , "Казахстан"},
        {"Пиро" , "" , "Крио" , "Гео" , },
        {"8-мм «8 Супер" , "16-мм Супер-16" , "35-мм ВистаВижн" , "70-мм IMAX"},
        {"Эвкалипт" , "Дуб" , "Сосна" , "Пальма"},
        {"Венгрия" , "Болгария" , "Румыния " , "Мальта"},
        {"Испания " , "Италия" , "Исландия " , "Франция"},
        {"Девочка-волшебница Мадока " , "Сейлор Мун " , "Сакура - собирательница карт " , "Моэ"},
        {"Оборотнем " , "Человеком " , "Полу-вампиром " , "Нигой"},
        {"печень  " , "сердце  " , "мозг  " , "кожа"},
        {"Секрет небес " , "Паруса в тумане " , "Королева за 30 дней " , " 10 желаний Софии"},
        {"прямоугольник " , "круг  " , "треугольник  " , "квадрат "},
        {"Лев Толстой " , "Федор Достоевский " , "Иван Тургенев " , "Антон Чехов"},
        {"«Война и мир» " , " «Анна Каренина» " , "«Братья Карамазовы» " , "«Преступление и наказание»"},
        {" Амазонка " , "Нил " , "Янцзы " , " Миссисипи"},
        {"Серебро " , "Золото " , "Платина" , "Медь"},
        {"Китай " , "Япония " , "Северная Корея " , "Сингапур"},
        {"Китай  " , "Индия " , "Непал" , "Бутан"},
        {"Святой Владимир " , "Святой Петр " , "Святой Павел " , "Николая Чудотворца"},
        {"Касты","Джати","Варны","Расы"},
        {"4" , "5" , "10" , "7"},
        {"Шива" , "Брахма" , "Будда" , "Вишну"},
        {"1914 год" , "1929 год" , "1939 год" , "1945 год"},
        {" Брахма " , " Вайшьи " , " Кштари" , " Вишну "},
        {"Живопись" , "Музыка " , "Скульптура" , "Графика"},
    };
    string symbol[4]{ "1.","2.","3.","4." };
    int ArrRandQuestion[QUESTIONSIZE];
    int ArrRandAnswer[ANSWERSIZE];

    for (int i = 0; i < QUESTIONSIZE; i++)
    {
        int num;
        bool unique;
        do {
            num = rand() % 30;
            unique = true;
            for (int j = 0; j < i; j++) {
                if (ArrRandQuestion[j] == num) {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
        ArrRandQuestion[i] = num;
    }

    for (int i = 0; i < QUESTIONSIZE; i++)
    {
        for (int j = 0; j < ANSWERSIZE; j++)
        {
            int num;
            bool unique;
            do {
                num = rand() % 4;
                unique = true;
                for (int k = 0; k < j; k++) {
                    if (ArrRandAnswer[k] == num) {
                        unique = false;
                        break;
                    }
                }
            } while (!unique);
            ArrRandAnswer[j] = num;
        }
    }

    while (true)
    {
        system("cls");
        cout << "Меню:" << endl;
        cout << "1. Правила игры" << endl;
        cout << "2. Настройки" << endl;
        cout << "3. Начать игру" << endl;
        cout << "4. Выйти" << endl;
        cout << "Выберите действие: ";
        cin >> menu;
        system("cls");

        switch (menu)
        {
        case 3:
            cout << "Игра началась!" << endl;
            for (int i = 0; i < questionsCount; i++)
            {
                cout << i + 1 << ". " << question[ArrRandQuestion[i]] << endl;

                for (int j = 0; j < ANSWERSIZE; j++)
                {
                    cout << "  " << symbol[j] << " " << answer[ArrRandQuestion[i]][ArrRandAnswer[j]] << endl;
                }

                cout << "У вас осталось " << livesCount << " жизней" << endl;

                if (fiftyFifty) {
                    cout << "Хотите использовать подсказку 50/50? (1 - Да, 0 - Нет): ";
                    cin >> intfiftyFifty;
                    if (intfiftyFifty == 1) {
                        int count = 0;
                        for (int j = 0; j < ANSWERSIZE; j++) {
                            if (answer[ArrRandQuestion[i]][ArrRandAnswer[j]] == PravilnAnswell[ArrRandQuestion[i]]) {
                                count++;
                            }
                        }
                        for (int j = 0; j < ANSWERSIZE; j++) {
                            if (answer[ArrRandQuestion[i]][ArrRandAnswer[j]] != PravilnAnswell[ArrRandQuestion[i]]) {
                                if (count == 2) {
                                    cout << "  " << symbol[ArrRandAnswer[j]] << " <подсказка недоступна>" << endl;
                                }
                                else {
                                    cout << "  " << symbol[ArrRandAnswer[j]] << " " << answer[ArrRandQuestion[i]][ArrRandAnswer[j]] << endl;
                                }
                            }
                            else {
                                cout << "  " << symbol[ArrRandAnswer[j]] << " " << answer[ArrRandQuestion[i]][ArrRandAnswer[j]] << endl;
                            }
                        }
                    }
                }

                cin >> UserAnswer;

                if (answer[ArrRandQuestion[i]][ArrRandAnswer[UserAnswer - 1]] == PravilnAnswell[ArrRandQuestion[i]]) {
                    cout << "Так держать!" << endl;
                }
                else {
                    livesCount--;
                    cout << "Ничего страшного. Правильный ответ: " << PravilnAnswell[ArrRandQuestion[i]] << endl;
                }

                if (livesCount == 0) {
                    cout << "Вы сдохли. Игра окончена." << endl;
                    break;
                }
            }
            break;

        case 2:  //настройки ...
            while (true)
            {
                system("cls");

                cout << "[+] Настройки:" << endl;
                cout << "1. Количество вопросов (10, 15, 20): " << questionsCount << endl;
                cout << "2. Количество жизней (макс 3): " << livesCount << endl;
                cout << "3. Подсказка 50/50: " << (fiftyFifty ? "Включена" : "Выключена") << endl;
                cout << "4. Время на викторину (от 2 до 10 минут): " << gameTime << " минут" << endl;
                cout << "5. Назад" << endl;
                cout << "Выберите настройку для изменения: ";

                cin >> menu;
                system("cls");

                if (menu == 5)
                {
                    break;
                }

                switch (menu)
                {
                case 1:
                    cout << "Введите новое количество вопросов (10, 15, 20): ";
                    while (true)
                    {
                        cin >> questionsCount;

                        if (questionsCount == 10)
                        {
                            system("cls");
                            break;
                        }
                        else if (questionsCount == 15)
                        {
                            system("cls");
                            break;
                        }
                        else if (questionsCount == 20)
                        {
                            system("cls");
                            break;
                        }
                        else
                        {
                            cout << "Не-а. Попробуйте снова." << endl;
                        }
                    }
                    break;


                case 2:
                    cout << "Введите новое количество жизней (макс 3): ";
                    while (true)
                    {
                        cin >> livesCount;
                        if (livesCount == 1)
                        {
                            system("cls");
                            break;
                        }
                        else if (livesCount == 2)
                        {
                            system("cls");
                            break;
                        }
                        else if (livesCount == 3)
                        {
                            system("cls");
                            break;
                        }
                        else
                        {
                            cout << "Не-а. Попробуйте снова." << endl;
                        }
                    }
                    break;
                case 3:
                    cout << "Включить или выключить подсказку 50/50? (1 - Включить, 0 - Выключить): ";
                    while (true)
                    {
                        cin >> intfiftyFifty;
                        if (intfiftyFifty == 1)
                        {
                            fiftyFifty = true;
                            system("cls");
                            break;
                        }
                        else if (intfiftyFifty == 0)
                        {
                            fiftyFifty = false;
                            system("cls");
                            break;
                        }
                        else
                        {
                            cout << "Не-а. Попробуйте снова." << endl;
                        }
                    }
                    break;

                case 4:
                    cout << "Введите новое время на викторину (от 2 до 10 минут): ";
                    while (true)
                    {
                        cin >> gameTime;
                        if (gameTime >= 2 && gameTime <= 10)
                        {
                            system("cls");
                            break;
                        }
                        else
                        {
                            cout << "Не-а. Попробуйте снова." << endl;

                        }
                    }
                    break;

                default:
                    cout << "Не-а. Попробуйте снова." << endl;
                    break;
                }
            }
            break;

        case 4:
            return 0;

        case 1:
            cout << "Правила игры:" << endl;
            cout << "1. Вам будет задано " << questionsCount << " вопросов." << endl;
            cout << "2. У вас есть " << livesCount << " жизни. Если вы дадите неправильный ответ, количество жизней уменьшится." << endl;
            cout << "3. Время на ответ на каждый вопрос составляет " << gameTime << " секунд. Если вы не успеете ответить, это будет засчитано как неправильный ответ." << endl;
            cout << "4. В игре доступна подсказка \"50/50\". Она позволяет исключить два неправильных варианта ответа из списка." << endl;
            cout << "5. После окончания игры вы получите свой результат." << endl;
            cout << "Нажмите любую клавишу, чтобы продолжить..." << endl;
            cin.ignore();
            cin.get();
            break;

        default:
            cout << "Не-а. Попробуйте снова." << endl;
            break;
        }
    }

    return 0;
}