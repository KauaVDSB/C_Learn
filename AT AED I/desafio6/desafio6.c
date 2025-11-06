#include "desafio6.h"

long long potenciaRecursiva(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    if (exp == 1) {
        return base;
    }
    return (long long)base * potenciaRecursiva(base, exp - 1);
}