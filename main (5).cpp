#include <iostream>
#include <string>
#include <utility>

int main() {
    int side_a, side_b, side_c = 0;
    std::cout << "Введите стороны треугольника для нахождения его периметра:" <<std::endl;
    std::cin>>side_a;
    std::cin>>side_b;
    std::cin>>side_c;
    std::cout<<"Периметр вашего прямоугольника:"<< side_a + side_b +side_c << std::endl;
    
}
