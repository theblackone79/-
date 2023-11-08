// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {
    setlocale(LC_ALL, "");

    int n, сумма;

    
    std::cout << "Введите значение n: ";
    std::cin >> n;

    
    сумма = n * (n + 1) / 2;

   
    std::cout << "Сумма чисел от 1 до " << n << " равна " << сумма << std::endl;

    return 0;
}

