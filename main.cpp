#include <iostream>
#include <string>

int main() {
  std::cout << "-----Started Calculaor-----" << std::endl;

  std::string numOne;
  std::string numTwo;
  char sign;

  std::cout << "Enter the first number: ";
  std::cin >> numOne;

  std::cout << "Enter the second number: ";
  std::cin >> numTwo;

  std::cout << "Enter the operator sign [+, -, *, /]: ";
  std::cin >> sign;

  double firstNum = std::stod(numOne);
  double secondNum = std::stod(numTwo);

  return 0;
}
