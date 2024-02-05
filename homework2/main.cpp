#include <iostream>
#include <string>
//using namespace std;

// ����������� ��������� ��� �������� ���������� � ���������� �����
struct BankAccount {
    int accountNumber;              // ����� �����
    std::string ownerName;          // ��� ���������
    double balance;                 // ���������� ����� �� �����
};

// ������� ��� ��������� ������� �����
void updateBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;   // ���������� ������� �����
}

int main() {
    setlocale(LC_ALL, "Russian");
    BankAccount account;            // �������� ���������� ��������� BankAccount

    // ������ ������ � ������������
    std::cout << "������� ����� �����: ";
    std::cin >> account.accountNumber;

    std::cin.ignore();              // ������� �������� ������

    std::cout << "������� ��� ���������: ";
    std::getline(std::cin, account.ownerName); // ������ ������ � ���������

    std::cout << "������� ������: ";
    std::cin >> account.balance;

    // ������ ������ �������
    double newBalance;
    std::cout << "������� ����� ������: ";
    std::cin >> newBalance;

    // ���������� ������� � �������������� ������� updateBalance
    updateBalance(account, newBalance);

    // ����� ���������� ����������
    std::cout << "��� ����: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}
