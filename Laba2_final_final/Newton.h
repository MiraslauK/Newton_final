#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double** initial(int n, int m);

double function1(double x1, double x2);

double function2(double x1, double x2);

double func11(double x1, double x2);

double func12(double x1, double x2);

double func21(double x1, double x2);

double func22(double x1, double x2);

void J(double** a, double x1, double x2);

void minus_vector_nevjazki(double* F, double x1, double x2);

double* gauss(double** matrix, int n, int m);

double* newton(int n, double x1, double x2);

double* newton2(int n, double x1, double x2);

void printResult(double* res, int n);