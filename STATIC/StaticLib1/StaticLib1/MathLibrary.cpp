#include "pch.h"
#include "MathLibrary.h"
#include <math.h>

double MathLibrary::Arithmetic::Add(double a, double b)
{
    return a + b;
}

double MathLibrary::Arithmetic::Subtract(double a, double b)
{
    return a - b;
}

double MathLibrary::Arithmetic::Multiply(double a, double b)
{
    return a * b;
}

double MathLibrary::Arithmetic::Divide(double a, double b)
{
    return a / b;
}

double MathLibrary::Arithmetic::GetDistance(double a, double b)
{
    return sqrt((b - a) * (b - a) + (b - a) * (b - a));
}
