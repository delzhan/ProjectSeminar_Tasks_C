﻿#include <iostream>
using namespace std;
//3.27) Записать логические выражения, которые имеют значение "Истина" только при выполнении указанных условий: а) х > 2 и у > 3; б) х > 1 или y > -2; в) х >= 0 и у < 5; г) х > 3 или x < -1; д) х > 3 и x < 10; е) неверно, что х > 2; ж) неверно, что х > 0 и х < 5; з) 10 < x <= 20; и) 0 < y <= 4 и x < 5.
int main()
{
    setlocale(0, "rus");

    int x, y;

    cout << "Введите произвольное значение х: ";
    cin >> x;
    cout << "Введите произвольное значение у: ";
    cin >> y;

    bool a = (x > 2) && (y > 3);       
    bool b = (x > 1) || (y > -2);       
    bool c = (x >= 0) && (y < 5);         
    bool d = (x > 3) || (x < -1);        
    bool e = (x > 3) && (x < 10);        
    bool f = !(x > 2);                   
    bool g = !(x > 0 && x < 5);             
    bool h = (x > 10) && (x <= 20);          
    bool i = (y > 0) && (y <= 4) && (x < 5); 

    cout << "а) " << (a ? "Истина" : "Ложь") << endl;
    cout << "б) " << (b ? "Истина" : "Ложь") << endl;
    cout << "в) " << (c ? "Истина" : "Ложь") << endl;
    cout << "г) " << (d ? "Истина" : "Ложь") << endl;
    cout << "д) " << (e ? "Истина" : "Ложь") << endl;
    cout << "е) " << (f ? "Истина" : "Ложь") << endl;
    cout << "ж) " << (g ? "Истина" : "Ложь") << endl;
    cout << "з) " << (h ? "Истина" : "Ложь") << endl;
    cout << "и) " << (i ? "Истина" : "Ложь") << endl;
    return 0;
}
