#include <iostream>
#include <string>
#include <utility>

int main() {
  int a, b; 
   std::cout << "Введите два числа:" << std::endl;
   std::cin >> a >> b; 
   // Меняем местами 
   a = a + b;
   b = a - b; 
   // теперь в b исходное значение a
   a = a - b;
   // теперь в a исходное значение b
   std::cout << "После обмена: a = " << a << ", b = " << b << std::endl;

}

