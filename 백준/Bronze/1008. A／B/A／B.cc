#include <iostream>
#include <iomanip>

int main()
{
    double num1;
    double num2;

    std::cin >> num1 >> num2;

    std::cout << std::setprecision(15);

    std::cout << num1 / num2 << std::endl;
}