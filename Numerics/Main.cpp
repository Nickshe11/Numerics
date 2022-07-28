#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //десятичное число, введенное пользователем
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_SIZE = 32; //int - 4 bytes = 32 bit
	bool bin[MAX_SIZE] = {}; // этот массив будет хранить разряды двоичного числа

	int i = 0;	// счетчик разрядов
	/*while (decimal)
	{
		bin[i] = decimal % 2; //получаем младший разряд двоичного числа
		decimal /= 2; // убираем полученный разряд двоичного числа
		i++;
	}
	i--;*/
	for (; decimal; bin[i] = decimal % 2,  decimal /= 2, i++);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
}