#include "pch.h"
#include "MathLibraryPlus.h"
#include <math.h>


double Normalize(double v)
{
    return Divide(v, GetNorme(v));
}

double GetNorme(double a)
{
    return sqrt(a * a + a * a);
}

double GetSignedAngleBetween(double a, double b)
{
    return atan2f(a * b - a * b, a * b + a * b);
}

