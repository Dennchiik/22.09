#include <iostream>
#define IS_EVEN(x) ((x % 2) == 0)

int main() {
    int number1 = 6;
    int number2 = 5;

    if (IS_EVEN(number1)) {
        std::cout << number1 << " - четное число" << std::endl;
    }
    else {
        std::cout << number1 << " - нечетное число" << std::endl;
    }

    if (IS_EVEN(number2)) {
        std::cout << number2 << " - четное число" << std::endl;
    }
    else {
        std::cout << number2 << " - нечетное число" << std::endl;
    }

    return 0;
}
