#include <iostream>
using namespace std;

int main()
//5.1) Напечатать ряд чисел 20 в виде: 20 20 20 20 20 20 20 20 20 20.
{
    setlocale(0, "rus");
    int Count, Number;

    cout << "Введите количество повторений заданного значения: ";
    cin >> Count;
    Number = 20;

    for (int i = 0; i < Count; i++) {
        cout << Number; // Вывод числа
        if (i < Count - 1) {
           cout << " "; 
        }
    }
    return 0;
}