#include <iostream>
#include <string>
//using namespace std;

struct Address {
    std::string city;       // Название города
    std::string street;     // Название улицы
    int houseNumber;        // Номер дома
    int apartmentNumber;    // Номер квартиры
    int zipCode;            // Индекс
};

// Функция для вывода структуры
void printAddress(const Address& addr) {
    std::cout << "Город: " << addr.city << std::endl;
    std::cout << "Улица: " << addr.street << std::endl;
    std::cout << "Номер дома: " << addr.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << addr.apartmentNumber << std::endl;
    std::cout << "Индекс: " << addr.zipCode << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Создание экземпляров структуры Address
    Address addr1 = { "Москва", "Арбат", 12, 8, 123456 };
    Address addr2 = { "Ижевск", "Пушкина", 59, 143, 953769 };

    // Вывод информации об адресах
    printAddress(addr1);
    std::cout << std::endl;
    printAddress(addr2);

    return 0;
}
