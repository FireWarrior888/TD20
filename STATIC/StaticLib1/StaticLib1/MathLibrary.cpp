#include "pch.h"
#include "MathLibrary.h"
#include <math.h>

double MathLibrary::Vector2::Add(double a, double b)
{
    return a + b;
}

double MathLibrary::Vector2::Subtract(double a, double b)
{
    return a - b;
}

double MathLibrary::Vector2::Multiply(double a, double b)
{
    return a * b;
}

double MathLibrary::Vector2::Divide(double a, double b)
{
    return a / b;
}

double MathLibrary::Vector2::GetDistance(double a, double b)
{
    return sqrt((b - a) * (b - a) + (b - a) * (b - a));
}
