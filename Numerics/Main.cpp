#include <iostream>
#define tab "\t"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //десятичное число, введенное пользователем
	//cout << "Введите десятичное число: "; cin >> decimal;
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
	/*for (; decimal; bin[i] = decimal % 2, decimal /= 2, i++);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;*/

	const int MAX_SIZE1 = 8;
	int arr[MAX_SIZE1]{};
	cout << "Введите десятичное число: "; cin >> decimal;
	int box = decimal, j = 0;
	for (; decimal > 16; j++)
	{
		arr[j] = decimal % 16;
		decimal /= 16;
		if (decimal < 16)
		{
			arr[j+1] = decimal;
		}
	}
	cout << "\nВвеленное число " << box << " = 0х";
	for (int i = MAX_SIZE1 - 1; i >= 0; i--)
	{
		switch (arr[i])
		{
		case(10):cout << "A"; break;
		case(11):cout << "B"; break;
		case(12):cout << "C"; break;
		case(13):cout << "D"; break;
		case(14):cout << "E"; break;
		case(15):cout << "F"; break;
		default:cout << arr[i];
		}
	}
		cout << endl;
}