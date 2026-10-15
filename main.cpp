// Preprost konzolni kalkulator za vajo z Gitom
#include <iostream>
#include <limits>
#include "Kalkulator.h"

void pocistiVnos() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void izpisiMeni() {
    std::cout << "\n=== KALKULATOR ===\n"
              << "1) Seštevanje\n"
              << "2) Odštevanje\n"
              << "3) Množenje\n"
              << "4) Deljenje\n"
              << "5) Potenca\n"
              << "0) Izhod\n"
              << "Izbira: ";
}

bool preberiStevilo(const char* poziv, double& x) {
    std::cout << poziv;
    if (std::cin >> x) return true;
    pocistiVnos();
    std::cout << "To ni število.\n";
    return false;
}

int main() {
    Kalkulator kalk;
    int izbira;

    while (true) {
        izpisiMeni();
        if (!(std::cin >> izbira)) {
            if (std::cin.eof()) break;
            pocistiVnos();
            std::cout << "Neveljavna izbira.\n";
            continue;
        }

        if (izbira == 0) break;
        if (izbira < 1 || izbira > 5) {
            std::cout << "Neveljavna izbira.\n";
            continue;
        }

        double a, b;
        if (!preberiStevilo("Prvo število: ", a)) continue;
        if (!preberiStevilo("Drugo število: ", b)) continue;

        double rezultat = 0;
        switch (izbira) {
            case 1: rezultat = kalk.sestej(a, b); break;
            case 2: rezultat = kalk.odstej(a, b); break;
            case 3: rezultat = kalk.zmnozi(a, b); break;
            case 4: rezultat = kalk.deli(a, b); break;
            case 5: rezultat = kalk.potenciraj(a, b); break;
        }
        std::cout << "Rezultat: " << rezultat << "\n";
    }

    std::cout << "Število izvedenih operacij: " << kalk.steviloOperacij() << "\n";
    return 0;
}