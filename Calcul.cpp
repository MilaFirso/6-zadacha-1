#include <iostream>
#include "Calcul.h"

void add(double num1, double num2)
{
    std::cout << num1 << " ��������� " << num2 << " = " << num1 + num2 << std::endl;
};

void multiply(double num1, double num2)
{
    std::cout << num1 << " �������� �� " << num2 << " = " << num1 * num2 << std::endl;
};

void subtract(double num1, double num2)
{
    std::cout << num1 << " ������ " << num2 << " = " << num1 - num2 << std::endl;
};

void divide(double num1, double num2)
{

    std::cout << num1 << " ��������� �� " << num2 << " = " << num1 / num2 << std::endl;
};

void vozved_v_step(double num1, double num2)
{

    std::cout << num1 << " � ������� " << num2 << " = " << pow(num1, static_cast<int>(num2)) << std::endl;
};
