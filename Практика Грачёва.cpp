

#include <iostream>

using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    setlocale(0, "");
    vector<int> sequence; 
    int n;
    cout << "Введите количество элементов в последовательности: ";
    cin >> n;

    cout << "Введите последовательность целых чисел:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sequence.push_back(num); 
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
        if (sequence[i] < min_num) 
        {
            min_num = sequence[i];
            min_count = 1;
        }
        else if (sequence[i] == min_num)
        {
            min_count++; 
        }
    }

    cout << "Минимальное число: " << min_num << endl;
    cout << "Количество повторений минимального числа: " << min_count << endl;

    return 0;
}
