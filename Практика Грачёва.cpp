// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    setlocale(0, "");
    vector<int> sequence; //создаёт вектор который хранит последовательность чисел
    int n;
    cout << "Введите количество элементов в последовательности: ";
    cin >> n;

    cout << "Введите последовательность целых чисел:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sequence.push_back(num); //добовляет в вектор введённые числа
    }

    if (sequence.empty())
    {
        cout << "Последовательность пуста.\n";
        return 0;
    }

    int min_num = sequence[0];
    int min_count = 1;

    for (int i = 1; i < sequence.size(); ++i)
    {
        if (sequence[i] < min_num) //исчет еденицы
        {
            min_num = sequence[i];
            min_count = 1;
        }
        else if (sequence[i] == min_num)
        {
            min_count++; // счётчик мин чисел
        }
    }

    cout << "Минимальное число: " << min_num << endl;
    cout << "Количество повторений минимального числа: " << min_count << endl;

    return 0;
}