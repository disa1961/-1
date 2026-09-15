#include <iostream>
#include <string>
#include <utility>

int main() {
    int c = 0;
    std::cout<<"Введите температуру в градусах по цельсию:"<<std::endl;
    std::cin>>c;
    float f = c*9/5+32;
    std::cout<<"Ваши градусы, но по фаренгейту:"<< f << std::endl;



}

