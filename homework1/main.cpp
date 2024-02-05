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
        std::cout << "������� ����� ������: ";
        std::cin >> userInput;

        // �������� ��������� ������ ������
        if (userInput < 0 || userInput > 12) {
            if (userInput == 0) break; // ����� �� �����, ���� ����� 0
            std::cout << "������������ �����!" << std::endl;
            continue;
        }

        // ���������� ��������� ����� � ���� ������������ Month
        Month month = static_cast<Month>(userInput);

        // ����� �������� ������
        switch (month) {
        case January: std::cout << "������" << std::endl; break;
        case February: std::cout << "�������" << std::endl; break;
        case March: std::cout << "����" << std::endl; break;
        case April: std::cout << "������" << std::endl; break;
        case May: std::cout << "���" << std::endl; break;
        case June: std::cout << "����" << std::endl; break;
        case July: std::cout << "����" << std::endl; break;
        case August: std::cout << "������" << std::endl; break;
        case September: std::cout << "��������" << std::endl; break;
        case October: std::cout << "�������" << std::endl; break;
        case November: std::cout << "������" << std::endl; break;
        case December: std::cout << "�������" << std::endl; break;
        }
    } while (userInput != 0);

    std::cout << "�� ��������" << std::endl;

    return 0;
}
