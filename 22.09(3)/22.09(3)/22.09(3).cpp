#include <iostream>
#define POWER(base, exponent) ({ \
    typeof(base) result = 1;    \
    for (int i = 0; i < (exponent); i++) { \
        result *= (base); \
    } \
    result; \
})

int main() {
    double base = 2.0;
    int exponent = 3;

    double result = POWER(base, exponent);

    std::cout << base << " в степени " << exponent << " равно " << result << std::endl;

    return 0;
}
