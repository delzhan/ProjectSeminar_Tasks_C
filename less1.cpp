#include <iostream> 
#include <math.h> 
#include <cstdlib> // для system 
using namespace std;
// 1.2) Вывести на экран число e (основание натурального логарифма) с точностью до десятых.
int main()
{
    const double EulerConstant = exp(1);
    cout << round(EulerConstant * 100) / 100 << endl;
    system("pause"); // Только для тех, у кого MS Visual Studio 
    return 0;
}