#include <iostream>
using namespace std;
//3.6) Вычислить значение логического выражения при следующих значениях логических величин X, Y и Z: X = Ложь, Y = Ложь, Z = Истина: а) X или Y и не Z; б) не X и не Y; в) не (X и Z) или Y; г) X и не Y или Z; д) X и (не Y или Z); е) X или (не (Y или Z)).
int main()
{
    bool X, Y, Z;

    X = false;
    Y = false;
    Z = true;

    bool a = (X or Y) and (not(Z)) ;
    bool b = (not(X)) and (not(Y));
    bool c = (not(X and Z)) or Y;
    bool d = X and (not(Y)) or Z;
    bool e = X and ((not(Y)) and Z);
    bool f = X or (not(Y or Z));

    cout << a << b << c << d << e << f << endl;
    return 0;
}
