#pragma once
#include "MathLibrary.h"

#ifdef DLLMATH_EXPORTS
#define DLLMATH_API _declspec(dllexport)
#else
#define DLLMATH_API _declspec(dllimport)
#endif
       
extern "C" DLLMATH_API double Normalize(double v);

extern "C" DLLMATH_API double GetNorme(double a);

extern "C" DLLMATH_API double GetSignedAngleBetween(double a, double b);
