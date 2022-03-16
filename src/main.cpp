#define _USE_MATH_DEFINES
#include <cmath>
#include"LaborkaConfig.h.in"
int main(){
#ifdef USE_TRIGONOMETRY_DEGREE
double result = cos_degree(45.0);
#else
double result = cos(M_PI/4.0); 
#endif
double sinus=sin(result);
return sinus;
}
