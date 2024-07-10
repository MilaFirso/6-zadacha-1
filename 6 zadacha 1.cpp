#include <iostream>
#include <cmath>
#include "calcul.h"

int main()
{
    double num1;
    double num2;
    int opa;

    setlocale(LC_ALL, "rus");

    std::cout << "Введите первое число: " << std::endl;
    std::cin >> num1;


    std::cout << "Введите второе число: " << std::endl;
    std::cin >> num2;


    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):" << std::endl;
    std::cin >> opa;
    if (opa == 1)
    {
        add(num1, num2);
    }
    else if (opa == 2)
    {
        subtract(num1, num2);
    }
    else if (opa == 3)
    {
        multiply(num1, num2);
    }

    else if (opa == 4)
    {
        divide(num1, num2);
    }
    else if (opa == 5)
    {
        vozved_v_step(num1, num2);
    }
    else
    {
        std::cout << "Ввели неизвестную команду" << std::endl;
    }
    return 0;
}

