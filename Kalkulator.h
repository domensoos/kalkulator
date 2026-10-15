//
// Created by Domen Šooš on 15. 10. 2026.
//

#ifndef KALKULATOR_KALKULATOR_H
#define KALKULATOR_KALKULATOR_H


class Kalkulator {
public:
    double sestej(double a, double b);
    double odstej(double a, double b);
    double zmnozi(double a, double b);
    double deli(double a, double b);
    int steviloOperacij() const;
private:
    int stevec = 0;
};


#endif //KALKULATOR_KALKULATOR_H
