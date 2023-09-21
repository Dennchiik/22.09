#include <iostream>

void printStars(int n) {
    if (n <= 0) {
        return;
    }

    std::cout << "* ";
    printStars(n - 1);
}

int main() {
    int n;

    std::cout << "Введите количество звезд: ";
    std::cin >> n;

    std::cout << "Звезды: ";
    printStars(n);

    std::cout << std::endl;

    return 0;
}
