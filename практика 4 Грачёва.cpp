// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	const int ARRSIZE = 15;

	int arr[ARRSIZE]{
		4, 1, 3, -4, 4, 8, 43, 23, 5, 5, 6, 8, 33, 6, 6
	};

	int minNum = 0;
	int maxNum = 0;
	int minNumIndex = 0;
	int maxNumIndex = 0;

	for (int i = 0; i < ARRSIZE; i++)
	{
		if (arr[i] < minNum || i == 0)
		{
			minNumIndex = i;
			minNum = arr[i];
		}

		if (arr[i] > maxNum || i == 0)
		{
			maxNumIndex = i;
			maxNum = arr[i];
		}

	}

	cout << "Минимальное число будет: " << minNum << ",и его индекс" << minNumIndex << endl;
	cout << "Максимальное число будет: " << maxNum << ",и его индекс" << maxNumIndex << endl;

}