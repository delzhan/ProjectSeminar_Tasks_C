#include <iostream>
using namespace std;
int main()
//4.23) Дано двузначное число. Определить: а) какая из его цифр больше: первая или вторая; б) одинаковы ли его цифры.
{
    setlocale(0, "rus");

    int A;
    cout << "Введите произвольное двузначное число: ";
    cin >> A;

    if (A >= 10 && A < 100) {
        int FirstNumber = A / 10;
        int SecondNumber = A % 10;
        if (FirstNumber > SecondNumber) {
            cout << "Первая цифра данного числа больше, чем вторая" << endl;
        }
        else if (FirstNumber < SecondNumber) {
            cout << "Вторая цифра данного числа больше, чем первая" << endl;
        }
        else {
            cout << "Обе цифры данного числа одинаковы." << endl;
        }
        return 0;
    }
    else {
        cout << "Ошибка! На вход поступило не двузначное число. Попробуйте ещё раз." << endl;
        return 1;
    }
   
}

