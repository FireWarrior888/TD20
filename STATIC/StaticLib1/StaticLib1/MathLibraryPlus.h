#pragma once
#include "MathLibrary.h"


namespace MathLibraryPlus
{
    class ArithmeticPlus : public MathLibrary::Vector2
    {
    public:
       
        static double Normalize(double v);

        static double GetNorme(double a);

        static double GetSignedAngleBetween(double a, double b);
    };
}