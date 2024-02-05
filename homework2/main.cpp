#include <iostream>
#include <string>
//using namespace std;

// Определение структуры для хранения информации о банковском счёте
struct BankAccount {
    int accountNumber;              // Номер счёта
    std::string ownerName;          // Имя владельца
    double balance;                 // Количество денег на счету
};

// Функция для изменения баланса счёта
void updateBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;   // Обновление баланса счёта
}

int main() {
    setlocale(LC_ALL, "Russian");
    BankAccount account;            // Создание экземпляра структуры BankAccount

    // Запрос данных у пользователя
    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;

    std::cin.ignore();              // Очистка входного буфера

    std::cout << "Введите имя владельца: ";
    std::getline(std::cin, account.ownerName); // Чтение строки с пробелами

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    // Запрос нового баланса
    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    // Обновление баланса с использованием функции updateBalance
    updateBalance(account, newBalance);

    // Вывод обновлённой информации
    std::cout << "Ваш счёт: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}
