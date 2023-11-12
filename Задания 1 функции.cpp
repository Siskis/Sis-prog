#include <iostream>
#include <cstdlib> // Для использования функции rand()

using namespace std; 
// Функция для заполнения массива рандомными значениями и вывода на экран
void zapolnenieArray(int array[], int size) {
    // Заполнение массива рандомными значениями
    for (int i = 0; i < size; ++i)
    {
        array[i] = rand() % 100; // рандомайз
    }

    // Вывод массива на экран
    cout << "Массив [" << size << "]: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size1 = 5; // Размер первого массива
    const int size2 = 8; // Размер второго массива

    int array1[size1];
    int array2[size2];

    // Заполнение и вывод первого массива
    zapolnenieArray(array1, size1);

    // Заполнение и вывод второго массива
    zapolnenieArray(array2, size2);

    return 0;
}
