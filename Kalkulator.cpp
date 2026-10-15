//
// Created by Domen Šooš on 15. 10. 2026.
//
#include "Kalkulator.h"
#include <cmath>

double Kalkulator::sestej(double a, double b) {
    ++stevec;
    return a + b;
}

double Kalkulator::odstej(double a, double b) {
    ++stevec;
    return a - b;
}

double Kalkulator::zmnozi(double a, double b) {
    ++stevec;
    return a * b;
}

double Kalkulator::deli(double a, double b) {
    ++stevec;
    return a / b;
}

double Kalkulator::potenciraj(double osnova, double eksponent) {
    ++stevec;
    return std::pow(osnova, eksponent);
}

int Kalkulator::steviloOperacij() const {
    return stevec;
}

