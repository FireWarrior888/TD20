#include "MathLibrary.h"
#include "MathLibraryPlus.h"
#include <iostream>

int main()
{
    double a = 10;
    double b = 5;

    double result1 = MathLibrary::Arithmetic::Add(a, b);
    double result2 = MathLibrary::Arithmetic::Subtract(a, b);
    double result3 = MathLibrary::Arithmetic::Multiply(a, b);
    double result4 = MathLibrary::Arithmetic::Divide(a, b);
    double result5 = MathLibrary::Arithmetic::GetDistance(a, b);

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;
    std::cout << result3 << std::endl;
    std::cout << result4 << std::endl;
    std::cout << result5 << std::endl;


    double v = 20;

    double result6 = MathLibraryPlus::ArithmeticPlus::Normalize(v);
    double result7 = MathLibraryPlus::ArithmeticPlus::GetNorme(a);
    double result8 = MathLibraryPlus::ArithmeticPlus::GetSignedAngleBetween(a, b);

    std::cout << "\n" << result6 << std::endl;
    std::cout << result7 << std::endl;
    std::cout << result8 << std::endl;
}
