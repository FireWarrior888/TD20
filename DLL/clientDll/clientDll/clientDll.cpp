#include "MathLibrary.h"
#include "MathLibraryPlus.h"
#include <iostream>

int main()
{
    double a = 10;
    double b = 5;

    double result1 = Vecteur2::Add(a, b);
    double result2 = Vecteur2::Subtract(a, b);
    double result3 = Vecteur2::Multiply(a, b);
    double result4 = Vecteur2::Divide(a, b);
    double result5 = Vecteur2::GetDistance(a, b);

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;
    std::cout << result3 << std::endl;
    std::cout << result4 << std::endl;
    std::cout << result5 << std::endl;


    double v = 20;

    double result6 = Normalize(v);
    double result7 = GetNorme(a);
    double result8 = GetSignedAngleBetween(a, b);

    std::cout << "\n" << result6 << std::endl;
    std::cout << result7 << std::endl;
    std::cout << result8 << std::endl;
}
