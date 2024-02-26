/*
Header file defines the most common mathematical functions
*/


#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#endif

#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


typedef double (*Function)(double);

double quadratics(double x,double a,double b,double c){
    return a*x*x+b*x+c;
}


double abs_value(double x){
    return fabs(x);
}
