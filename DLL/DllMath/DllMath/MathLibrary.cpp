#include "pch.h"
#include "MathLibrary.h"
#include <math.h>

//double Add(double a, double b)
//{
//    return a + b;
//}
//
//double Subtract(double a, double b)
//{
//    return a - b;
//}
//
//double Multiply(double a, double b)
//{
//    return a * b;
//}
//
//double Divide(double a, double b)
//{
//    return a / b;
//}
//
//double GetDistance(double a, double b)
//{
//    return sqrt((b - a) * (b - a) + (b - a) * (b - a));
//}
//
//double Normalize(double v)
//{
//    return Divide(v, GetNorme(v));
//}
//
//double GetNorme(double a)
//{
//    return sqrt(a * a + a * a);
//}
//
//double GetSignedAngleBetween(double a, double b)
//{
//    return atan2f(a * b - a * b, a * b + a * b);
//}
//
//double Lerp(double a, double b, float t)
//{
//    return Add(Multiply(Subtract(b, a), t), a);
//}

double Vecteur2::Add(double a, double b)
{
    return a + b;
}

double Vecteur2::Subtract(double a, double b)
{
    return a - b;
}

double Vecteur2::Multiply(double a, double b)
{
    return a * b;
}

double Vecteur2::Divide(double a, double b)
{
    return a / b;
}

double Vecteur2::GetDistance(double a, double b)
{
    return sqrt((b - a) * (b - a) + (b - a) * (b - a));
}

double Vecteur2::Normalize(double v)
{
    return Divide(v, GetNorme(v));
}

double Vecteur2::GetNorme(double a)
{
    return sqrt(a * a + a * a);
}

double Vecteur2::GetSignedAngleBetween(double a, double b)
{
    return atan2f(a * b - a * b, a * b + a * b);
}

double Vecteur2::Lerp(double a, double b, float t)
{
    return Add(Multiply(Subtract(b, a), t), a);
}

double Vecteur2::Clamp(double x, double min, double max)
{
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

double Vecteur2::Min(double a, double b)
{
    return (a < b) ? a : b;
}

double Vecteur2::Max(double a, double b)
{
    return (a > b) ? a : b;
}

double Vecteur2::Abs(double x)
{
    return (x < 0) ? -x : x;
}

double Vecteur2::Pow(double a, double b)
{
    return pow(a, b);
}

double Vecteur2::Sqrt(double x)
{
    return sqrt(x);
}

double Vecteur2::Modulo(double a, double b)
{
    return fmod(a, b);
}

double Vecteur2::InverseLerp(double a, double b, double v)
{
    if (a == b) return 0.0;
    return Clamp((v - a) / (b - a), 0.0, 1.0);
}

double Vecteur2::Cos(double angle)
{
    return cos(angle);
}

double Vecteur2::Sin(double angle)
{
    return sin(angle);
}

double Vecteur2::Tan(double angle)
{
    return tan(angle);
}

double Vecteur2::Acos(double x)
{
    return acos(x);
}

double Vecteur2::Asin(double x)
{
    return asin(x);
}

double Vecteur2::Atan(double x)
{
    return atan(x);
}

double Vecteur2::DegToRad(double deg)
{
    return deg * (3.1415 / 180.0);
}

double Vecteur2::RadToDeg(double rad)
{
    return rad * (180.0 / 3.1415);
}

