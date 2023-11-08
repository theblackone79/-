// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    using namespace std;
    const int maxSize = 100;
    int arr[maxSize];

    int n;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;


    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }


    cout << "Содержимое массива:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    int sumMultipleOf3 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sumMultipleOf3 += arr[i];
        }
    }

    cout << "Сумма элементов массива, кратных 3: " << sumMultipleOf3 << endl;

    return 0;
}