#include <iostream>
#include <string>
//using namespace std;

struct Address {
    std::string city;       // �������� ������
    std::string street;     // �������� �����
    int houseNumber;        // ����� ����
    int apartmentNumber;    // ����� ��������
    int zipCode;            // ������
};

// ������� ��� ������ ���������
void printAddress(const Address& addr) {
    std::cout << "�����: " << addr.city << std::endl;
    std::cout << "�����: " << addr.street << std::endl;
    std::cout << "����� ����: " << addr.houseNumber << std::endl;
    std::cout << "����� ��������: " << addr.apartmentNumber << std::endl;
    std::cout << "������: " << addr.zipCode << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // �������� ����������� ��������� Address
    Address addr1 = { "������", "�����", 12, 8, 123456 };
    Address addr2 = { "������", "�������", 59, 143, 953769 };

    // ����� ���������� �� �������
    printAddress(addr1);
    std::cout << std::endl;
    printAddress(addr2);

    return 0;
}
