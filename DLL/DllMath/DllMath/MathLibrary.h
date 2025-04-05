#pragma once


#ifdef DLLMATH_EXPORTS
#define DLLMATH_API _declspec(dllexport)
#else
#define DLLMATH_API _declspec(dllimport)
#endif


   /* DLLMATH_API double Add(double a, double b);

    DLLMATH_API double Subtract(double a, double b);

    DLLMATH_API double Multiply(double a, double b);

    DLLMATH_API double Divide(double a, double b);

    DLLMATH_API double GetDistance(double a, double b);

    DLLMATH_API double Normalize(double v);

    DLLMATH_API double GetNorme(double a);

    DLLMATH_API double GetSignedAngleBetween(double a, double b);

    DLLMATH_API double Lerp(double a, double b, float t);*/

class DLLMATH_API Vecteur2
{
public:
    static double Add(double a, double b);
    static double Subtract(double a, double b);
    static double Multiply(double a, double b);
    static double Divide(double a, double b);
    static double GetDistance(double a, double b);
    static double Normalize(double v);
    static double GetNorme(double a);
    static double GetSignedAngleBetween(double a, double b);
    static double Lerp(double a, double b, float t);
    static double Clamp(double x, double min, double max);
    static double Min(double a, double b);
    static double Max(double a, double b);
    static double Abs(double x);
    static double Pow(double a, double b);
    static double Sqrt(double x);
    static double Modulo(double a, double b);
    static double InverseLerp(double a, double b, double v);
    static double Cos(double angle);
    static double Sin(double angle);
    static double Tan(double angle);
    static double Acos(double x);
    static double Asin(double x);
    static double Atan(double x);
    static double DegToRad(double deg);
    static double RadToDeg(double rad);
};




 
    