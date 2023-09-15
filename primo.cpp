#include <iostream>

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    int n;

    std::cout << "Ingrese un número: ";
    std::cin >> n;

    std::cout << "Los números primos hasta " << n << " son:" << std::endl;

    for (int i = 2; i <= n; ++i) {
        if (esPrimo(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
