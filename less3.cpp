#include <iostream>
using namespace std;
//2.10) Дано двузначное число. Найти: а) число десятков в нем; б) число единиц в нем; в) сумму его цифр; г) произведение его цифр.
int main()
{
	setlocale(0, "rus");
	int a, CountOfUnits, CountOfTen, CountOfHundreds, SummOfAllNumbers, CompositionOfAllCounts;
	cout << "Введите произвольное трёхзачное число : "; 
	cin >> a;
	
	if (a >= 100  && a < 1000) {
		CountOfUnits = a % 10;
		CountOfTen = (a / 10) % 10;
		CountOfHundreds = a / 100;
		SummOfAllNumbers = CountOfUnits + CountOfTen + CountOfHundreds;
		CompositionOfAllCounts = CountOfUnits * CountOfTen * CountOfHundreds;
	} else {
		cout << "Ошибка! Введено неправильное значение. Попробуйте ещё раз." << endl;
		return 1;
	}
	cout << "Количество единиц в данном числе: " << CountOfUnits << "\nКоличество десятков в данном числе: " << CountOfTen << "\nСумма цифр данного числа: " << SummOfAllNumbers << "\nПроизведение цифр данного числа: "<< CompositionOfAllCounts << endl;
	return 0;


}