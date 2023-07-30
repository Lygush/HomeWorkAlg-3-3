#include <iostream>

void Print(int* arr, int size) {
    for (int i{}; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void CountSort(int* arr, int size, int left, int right) {
    int* counts = new int[right + 1] {0};
    for (int i{}; i < size; ++i) {
        counts[arr[i] - left]++;
    }
    int c{};
    for (int i{}; i < size; ++i) {
        while (counts[c] == 0) {
            c++;
        }
        arr[i] = c + left;
        counts[c]--;
    }
    delete[] counts;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int firstArr[] { 19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17 };
    std::cout << "Исходный массив: ";
    Print(firstArr, 30);
    CountSort(firstArr, 30, 10, 24);
    std::cout << "Отсортированный массив: ";
    Print(firstArr, 30);
    std::cout << std::endl;

    int secondArr[]{ 16, 17, 14, 20, 22, 20, 17, 22, 16, 19, 23, 24, 20, 22, 21, 18, 14, 16, 17, 21, 10, 11, 19, 23, 11, 11, 17, 17, 11, 21, 17, 11, 17, 16, 12, 11, 16, 22, 23, 16 };
    std::cout << "Исходный массив: ";
    Print(secondArr, 40);
    CountSort(secondArr, 40, 10, 24);
    std::cout << "Отсортированный массив: ";
    Print(secondArr, 40);
    std::cout << std::endl;

    int therdArr[]{ 15, 19, 18, 23, 12, 18, 18, 19, 23, 12, 20, 15, 22, 21, 18, 19, 20, 12, 16, 20, 14, 17, 13, 10, 23, 19, 14, 10, 22, 19, 12, 24, 23, 22, 15, 13, 22, 18, 18, 11, 23, 24, 17, 10 };
    std::cout << "Исходный массив: ";
    Print(therdArr, 44);
    CountSort(therdArr, 44, 10, 24);
    std::cout << "Отсортированный массив: ";
    Print(therdArr, 44);
    std::cout << std::endl;
}

