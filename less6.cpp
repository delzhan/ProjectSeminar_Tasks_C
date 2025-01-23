#include <iostream>
using namespace std;
//3.27) Записать логические выражения, которые имеют значение "Истина" только при выполнении указанных условий: а) х > 2 и у > 3; б) х > 1 или y 2; в) х 0 и у < 5; г) х > 3 или x 1; д) х > 3 и x < 10; е) неверно, что х > 2; ж) неверно, что х > 0 и х < 5; з) 10 < x 20; и) 0 < y 4 и x < 5.
int main()
{
    setlocale(0, "rus");

    int x, y;
    bool a, b, c, d, e, f, g, h, j;

    cout << "Введите произвольное значение х: ";
    cin >> x;
    cout << "Введите произвольное значение у: ";
    cin >> y;

    if (x > 2 && y > 3) {
        a = true;
        cout << a;
    }
    if (x > 1 or y > (-2)) {
        b = true;
        cout << b;
    }
    if (x >= 0 and y < 5) {
        c = true;
        cout << c;
    }
    if (x > 3 and x < (-1)) {
        d = true;
        cout << d;
    }
    if (x > 3 and x < 10) {
        e = true;
        cout << e;
    }
    if (!(x > 2)) {
        f = true;
        cout << f;
    }
    if (!(x > 0 and x < 5)) {
        g = true;
        cout << g;
    }
    if (10 < x && x <= 20) {
        h = true;
        cout << h;
    }
    if (0 < y && y <= 4 && x < 5) {
        j = true;
        cout << j;
    }
    return 0;
}