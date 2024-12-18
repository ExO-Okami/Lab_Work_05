#include <iostream>
#include <vector>

void task1() {
    std::vector<int> sequence;
    int number;

    std::cout << "Введите натуральные числа (введите -1 для завершения ввода):\n";
    while (true) {
        std::cin >> number;
        if (number == -1) {
            break; 
        }
        sequence.push_back(number);
    }

    int sum = 0;
    int maxNumber = -1;
    int maxIndex = -1;

    for (size_t i = 0; i < sequence.size(); ++i) {
        if (sequence[i] % 10 == 0 || sequence[i] % 10 == 7) {
            sum += sequence[i];
            if (sequence[i] > maxNumber) {
                maxNumber = sequence[i]; 
                maxIndex = i + 1; 
            }
        }
    }

    std::cout << "Сумма чисел, оканчивающихся на 0 или 7: " << sum << std::endl;
    if (maxIndex != -1) {
        std::cout << "Наибольшее число: " << maxNumber << ", его номер в последовательности: " << maxIndex << std::endl;
    } else {
        std::cout << "Чисел, оканчивающихся на 0 или 7, не найдено." << std::endl;
    } // Выводится сумма, максимальное число и его индекс
}

void task2() {
    long long N;
    std::cout << "Введите натуральное число N: ";
    std::cin >> N;

    int sumodd = 0;

    while (N > 0) {
        int digit = N % 10; 
        if (digit % 2 != 0) { 
            sumodd += digit;
        }
        N /= 10; // Убираем последнюю цифру
    }

    std::cout << "Сумма нечетных цифр числа: " << sumodd << std::endl;
}

int main() {
    task1(); 
    task2(); 
    return 0;
}
