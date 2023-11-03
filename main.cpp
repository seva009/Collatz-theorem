#include <iostream>

int main() {
    int *it = new int[1300];
    unsigned long long num = 5;
    unsigned long long a = num;
    unsigned long long iters = 0;
    unsigned long long calcTo;
    int range;
    std::cout << "calculate to: ";
    std::cin >> calcTo;
    std::cout << "Iteration range: ";
    std::cin >> range;
    while (num < calcTo) {
        while (a != 1) {
            if (a % 2 == 0) {
                a /= 2;
            }
            else {
                a = a * 3 + 1;
            }
            iters++;
        }
        std::cout << num << " iterations: " << iters << '\n';
        it[iters]++;
        num++;
        a = num;
        iters = 0;
    }
    for (int i = 0; i < range; i++) {
        std::cout << i << " : " << it[i] << '\n';
    }
}