#include "Newton.h"


int main()
{
    int n = 2; 
    double x1 = 3, 
           x2 = 2;

    printResult(newton(n, x1, x2),n);

    x2 = -2;

    printResult(newton(n, x1, x2), n);


    return 0;
}