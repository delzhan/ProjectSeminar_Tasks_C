#include <iostream>
using namespace std;
//2.24) Из трехзначного числа x вычли его последнюю цифру. Когда результат разделили на 10, а к частному слева приписали последнюю цифру числа x, то получилось число 237. Найти число x.
int main()
{
	setlocale(0, "rus");
	for (int x = 100; x < 1000; x++) {

		int LastNumber = x % 10;
		int Stub = x - LastNumber;
		int Private = Stub/ 10;
		int Result = LastNumber * 100 + Private;

		if (Result == 237) {
			std::cout << "Значение x, соответствующее условию задачи: "<< x << std::endl;
		}
	}
	return 0;
}
