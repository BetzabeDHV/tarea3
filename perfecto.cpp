#include <iostream>

bool esNumeroPerfecto(int numero) {
    int sumaDivisores = 1;
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }
    return sumaDivisores == numero;
}

int main() {
    int n;

    std::cout << "Ingrese un número: ";
    std::cin >> n;

    std::cout << "Los números perfectos hasta " << n << " son:" << std::endl;

    for (int numero = 2; numero <= n; ++numero) {
        if (esNumeroPerfecto(numero)) {
            std::cout << numero << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

