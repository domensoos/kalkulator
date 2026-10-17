# Kalkulator

Preprost konzolni kalkulator v C++, narejen kot testni projekt za vajo z Gitom in GitHubom.

## Funkcije

- seštevanje, odštevanje, množenje in deljenje
- potenciranje in povprečje dveh števil
- preverjanje neveljavnega vnosa in deljenja z nič
- štetje izvedenih operacij

## Zahteve

- prevajalnik za C++20 (clang++ ali g++)
- CMake 3.20 ali novejši (neobvezno, za CLion)

## Prevajanje in zagon

V CLionu projekt odpri in poženi z zelenim gumbom ▶.

V Terminalu:

```
g++ -std=c++20 -o kalkulator main.cpp Kalkulator.cpp
./kalkulator
```

## Zgradba projekta

| Datoteka | Vsebina |
| --- | --- |
| `Kalkulator.h`, `Kalkulator.cpp` | razred Kalkulator z računskimi operacijami |
| `main.cpp` | meni in branje vnosa |
| `.github/workflows/build.yml` | GitHub Actions: prevajanje in preizkus |
| `.github/dependabot.yml` | nastavitve za Dependabot |
| `dodatki/` | podmodul `kalkulator-dodatki` |

## Kloniranje s podmodulom

```
git clone --recurse-submodules https://github.com/domensoos/kalkulator.git
```

## Prispevanje

Navodila so v [CONTRIBUTING.md](CONTRIBUTING.md).

## Avtor

Domen Šooš