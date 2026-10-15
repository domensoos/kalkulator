//
// Created by Domen Šooš on 15. 10. 2026.
//
#include "Kalkulator.h"

double Kalkulator::sestej(double a, double b) {
    ++stevec;
    return a + b;
}

double Kalkulator::odstej(double a, double b) {
    ++stevec;
    return a - b;
}

int Kalkulator::steviloOperacij() const {
    return stevec;
}

