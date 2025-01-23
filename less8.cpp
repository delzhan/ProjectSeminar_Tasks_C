#include <iostream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <cmath>
using namespace std;
//4.16) Известны площади круга и квадрата. Определить: а) уместится ли круг в квадрате? б) уместится ли квадрат в круге?
int main()
{
    setlocale(0, "rus");

    double AreaOfCircle, AreaOfSquare;

    cout << "Введите произвольное значение площади квадрата: ";
    cin >> AreaOfSquare;
    cout << "Введите произвольное значение площади круга: ";
    cin >> AreaOfCircle;

    if (AreaOfCircle > AreaOfSquare) {
        cout << "Квадрат уместится в круге." << endl;
    }
    else if (AreaOfCircle < AreaOfSquare) {
        cout << "Круг уместится в квадрате." << endl;
    }
    else {
        cout << "Площади данных фигур равны. Ни одна из фигур не поместится в другой." << endl;
    }

    return 0;
}