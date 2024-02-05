#include <iostream>
#include <string>
//using namespace std;

enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    setlocale(LC_ALL, "Russian");
    int userInput;

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> userInput;

        // Проверка введённого номера месяца
        if (userInput < 0 || userInput > 12) {
            if (userInput == 0) break; // Выход из цикла, если введён 0
            std::cout << "Неправильный номер!" << std::endl;
            continue;
        }

        // Приведение введённого числа к типу перечисления Month
        Month month = static_cast<Month>(userInput);

        // Вывод названия месяца
        switch (month) {
        case January: std::cout << "Январь" << std::endl; break;
        case February: std::cout << "Февраль" << std::endl; break;
        case March: std::cout << "Март" << std::endl; break;
        case April: std::cout << "Апрель" << std::endl; break;
        case May: std::cout << "Май" << std::endl; break;
        case June: std::cout << "Июнь" << std::endl; break;
        case July: std::cout << "Июль" << std::endl; break;
        case August: std::cout << "Август" << std::endl; break;
        case September: std::cout << "Сентябрь" << std::endl; break;
        case October: std::cout << "Октябрь" << std::endl; break;
        case November: std::cout << "Ноябрь" << std::endl; break;
        case December: std::cout << "Декабрь" << std::endl; break;
        }
    } while (userInput != 0);

    std::cout << "До свидания" << std::endl;

    return 0;
}
