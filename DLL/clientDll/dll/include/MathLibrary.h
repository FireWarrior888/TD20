#pragma once

#ifdef DLLMATH_EXPORTS
#define DLLMATH_API _declspec(dllexport)
#else
#define DLLMATH_API _declspec(dllimport)
#endif


 extern "C" DLLMATH_API double Add(double a, double b);

 extern "C" DLLMATH_API double Subtract(double a, double b);

 extern "C" DLLMATH_API double Multiply(double a, double b);

 extern "C" DLLMATH_API double Divide(double a, double b);

 extern "C" DLLMATH_API double GetDistance(double a, double b);
    