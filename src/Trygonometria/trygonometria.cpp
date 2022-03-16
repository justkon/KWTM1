#define _USE_MATH_DEFINES
#include "trygonometria.h"
#include <cmath>
double degreemath::sin(double degree) {
      double radian= M_PI*degree/180; //zamiana stopni na radiany:  pi radianów = 180 stopni
         return std::sin(radian);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::cos(double degree) {
       double radian= M_PI*degree/180; //zamiana stopni na radiany:  pi radianów = 180 s$
         return std::cos(radian);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::tan(double degree) {
       double radian= M_PI*degree/180; //zamiana stopni na radiany:  pi radianów = 180 s$
         return std::tan(radian);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::cot(double degree) {
       double radian= M_PI*degree/180; //zamiana stopni na radiany:  pi radianów = 180 s$
       double cot=1/(std::tan(radian));  
return cot;   //funkcja biblioteczna z piku <cmath>
}

