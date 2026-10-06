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

  switch (sign)
  {
  case '+':
    std::cout << firstNum + secondNum << std::endl;
    break;

  case '-':
    std::cout << firstNum - secondNum << std::endl;
    break;
  
  case '*':
    std::cout << firstNum * secondNum << std::endl;
    break;

  case '/':
    std::cout << firstNum / secondNum << std::endl;
    break;  

  default:
    std::cout << "Restart the program and provided all require inputs" << std::endl;
    break;
  }

  return 0;
}
