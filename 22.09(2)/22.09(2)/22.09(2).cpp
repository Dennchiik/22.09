#include <iostream>
#define SUM_UP_TO_N(n) ((n * (n + 1)) / 2)

int main() {
    int n = 10; 

    int sum = SUM_UP_TO_N(n);

    std::cout << "Сумма чисел от 1 до " << n << " равна " << sum << std::endl;

    return 0;
}
