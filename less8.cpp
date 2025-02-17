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

    double CircleDiameter = 2 * sqrt(AreaOfCircle / M_PI);
    double SquareSide = sqrt(AreaOfSquare);
    double SquareDiagonal = SquareSide * sqrt(2);

    cout << "а) ";
    if (CircleDiameter <= SquareSide) {
        cout << "Круг уместится в квадрате." << endl;
    }
    else {
        cout << "Круг не уместится в квадрате." << endl;
    }

    cout << "б) ";
    if (SquareDiagonal <= CircleDiameter) {
        cout << "Квадрат уместится в круге." << endl;
    }
    else {
        cout << "Квадрат не уместится в круге." << endl;
    }
    return 0;
}
