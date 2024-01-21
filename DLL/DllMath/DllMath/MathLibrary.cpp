#include "pch.h"
#include "MathLibrary.h"
#include <math.h>

double Add(double a, double b)
{
    return a + b;
}

double Subtract(double a, double b)
{
    return a - b;
}

double Multiply(double a, double b)
{
    return a * b;
}

double Divide(double a, double b)
{
    return a / b;
}

double GetDistance(double a, double b)
{
    return sqrt((b - a) * (b - a) + (b - a) * (b - a));
}

