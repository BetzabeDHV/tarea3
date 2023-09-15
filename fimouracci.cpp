#include <iostream>

int main() {
    int n;
    
    std::cout << "Ingrese un número límite n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "El número límite debe ser mayor que 0." << std::endl;
        return 1;
    }

    int a = 0, b = 1;

    std::cout << "Los números de la secuencia de Fibonacci hasta " << n << " son:" << std::endl;

    while (a <= n) {
        std::cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }

    std::cout << std::endl;

    return 0;
}
