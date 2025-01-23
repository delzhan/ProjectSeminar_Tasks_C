#include <iostream>  
#include <math.h> 
using namespace std;
//1.28) Дана длина ребра куба. Найти объем куба и площадь его боковой поверхности.
int main()
{
    setlocale(0, "rus");
    double Side;
    cout << "Введите значение стороны куба: ";
    cin >> Side;
    double Volume = pow(Side, 3);
    double Square = 4 * pow(Side, 2);
    cout << "Объем куба равен: " << Volume << endl;
    cout << "Площадь боковой поверхности равна: " << Square << endl;
    system("pause"); // Только для тех, у кого MS Visual Studio 
    return 0;
}