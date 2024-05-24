// lab14_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void fillFibonacci(int arr[], int size) {
    if (size > 0) arr[0] = 0; 
    if (size > 1) arr[1] = 1; 

    for (int i = 2; i < size; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2]; 
    }
}

// Функція лінійного пошуку
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    setlocale(LC_CTYPE, "ukr");

    const int SIZE = 30;
    int fibonacci[SIZE];

    fillFibonacci(fibonacci, SIZE);

    std::cout << "Масив чисел Фібоначчі: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << fibonacci[i] << " ";
    }
    std::cout << std::endl;

    int target;
    std::cout << "Введіть число для пошуку: ";
    std::cin >> target;

    int result = linearSearch(fibonacci, SIZE, target);

    if (result != -1) {
        std::cout << "Число " << target << " знайдено на індексі " << result << "." << std::endl;
    }
    else {
        std::cout << "Число " << target << " не знайдено у масиві." << std::endl;
    }

    return 0;
}