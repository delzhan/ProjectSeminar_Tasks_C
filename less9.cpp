#include <iostream>
using namespace std;
//4.23  Дано двузначное число. Определить: а) какая из его цифр больше: первая или вторая; б) одинаковы ли его цифры.
int main(int argc, char* argv[]) {
    setlocale(0, "rus");
    if (argc != 2) {
        cout << "Ошибка: введите только одно двузначное число!" << endl;
        return 1; 
    }

    int number = atoi(argv[1]);

    if (number < 10 || number > 99) {
        cout << "Ошибка: введите двузначное число!" << endl;
        return 1;
    }

    int firstDigit = number / 10; 
    int secondDigit = number % 10; 

    cout << "а) ";
    if (firstDigit > secondDigit) {
        cout << "Первая цифра (" << firstDigit << ") больше второй (" << secondDigit << ")." << endl;
    }
    else if (secondDigit > firstDigit) {
        cout << "Вторая цифра (" << secondDigit << ") больше первой (" << firstDigit << ")." << endl;
    }
    else {
        cout << "Цифры равны." << endl;
    }

    cout << "б) ";
    if (firstDigit == secondDigit) {
        cout << "Цифры одинаковы." << endl;
    }
    else {
        cout << "Цифры не одинаковы." << endl;
    }

    return 0;
}
