#include <iostream>

void code3(int N) {
    int contador = 0;
    for (int i = 0; i < N; i++) {
        contador++;
        if (i % 2 == 0) {
            std::cout << i << std::endl;
        }
    }

    for (int i = 0; i < N; i++) {
        contador++;
        if (i % 2 != 0) {
            std::cout << i << std::endl;
        }
    }

    std::cout << "La complejidad algorítmica es: " << contador << std::endl;
}

int main() {
    int N;
    std::cout << "Ingrese un valor para N: ";
    std::cin >> N;

    code3(N);

    return 0;
}
