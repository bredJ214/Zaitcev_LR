#include <iostream>

void performDivision(int Q, int P) {
    int remainder = Q % P;
    int quotient = Q / P;

    std::cout << "Остаток от деления Q на P: " << remainder << std::endl;
    std::cout << "Целая часть от деления Q на P: " << quotient << std::endl;
}

int main() {
    int choice, Q, P;

    std::cout << "Выберите действие:" << std::endl;
    std::cout << "1. Ввести числа и выполнить деление" << std::endl;
    std::cout << "2. Выйти" << std::endl;
    std::cout << "Введите номер действия: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Введите целое число Q: ";
            std::cin >> Q;
            do {
                std::cout << "Введите натуральное число P (меньше Q): ";
                std::cin >> P;
                if (P >= Q) {
                    std::cout << "P должно быть меньше Q. Пожалуйста, попробуйте снова." << std::endl;
                }
            } while (P >= Q);

            performDivision(Q, P);
            break;

        case 2:
            std::cout << "Выход из программы." << std::endl;
            break;

        default:
            std::cout << "Неверный выбор. Пожалуйста, выберите 1 или 2." << std::endl;
            break;
    }

    return 0;
}
