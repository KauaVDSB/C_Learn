#include "fatorial.h"

long long fatorialDuplo(int n) {
    if (n <= 1) {
        return 1;
    }
    return (long long)n * fatorialDuplo(n - 2);
}