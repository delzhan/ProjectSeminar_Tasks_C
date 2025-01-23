#include <iostream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <cmath>
using namespace std;
//4.10) Даны радиус круга и сторона квадрата. У какой фигуры площадь больше?
int main()
{
    setlocale(0, "rus");

    int RadiusOfCircle, SideOfSquare, AreaOfSquare;
    double AreaOfCircle;

    cout << "Введите произвольное значение радиуса круга: ";
    cin >> RadiusOfCircle;
    cout << "Введите произвольное значение стороны квадрата: ";
    cin >> SideOfSquare;

    AreaOfCircle =  M_PI * pow(RadiusOfCircle, 2);
    AreaOfSquare = pow(SideOfSquare, 2);

    if (AreaOfCircle > AreaOfSquare) {
        cout << "Площадь круга больше площади квадрата." << endl;
    }
    else if (AreaOfCircle < AreaOfSquare) {
        cout << "Площадь квадрата больше площади круга." << endl;
    }
    else {
        cout << "Площади данных фигур равны." << endl;
    }

    return 0;
}

