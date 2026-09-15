#include <iostream>
#include <string>
#include <utility>

int main() {
    //задание 3
    int your_age=0;
    float your_long=0;
    std::cout<<"Введите свой возраст:";
    std::cin >> your_age;
    std::cout<<"Введите свой рост:";
    std::cin >> your_long;
    std::cout<<"Тебе" << your_age << "лет, твой возраст -"<< your_long << "м." << std::endl;

}
