#include "pch.h"
#include "MathLibraryPlus.h"
#include <math.h>

double MathLibraryPlus::ArithmeticPlus::Normalize(double v)
{
    return Divide(v, GetNorme(v));
}

double MathLibraryPlus::ArithmeticPlus::GetNorme(double a)
{
    return sqrt(a * a + a * a);
}

double MathLibraryPlus::ArithmeticPlus::GetSignedAngleBetween(double a, double b)
{
    return atan2f(a * b - a * b, a * b + a * b);
}
