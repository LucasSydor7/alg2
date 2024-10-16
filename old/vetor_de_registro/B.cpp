#include <iostream>

struct Vetor {
    float x;
    float y;
    float z;
};

Vetor somaVetores(Vetor v1, Vetor v2) {
    Vetor resultado;
    resultado.x = v1.x + v2.x;
    resultado.y = v1.y + v2.y;
    resultado.z = v1.z + v2.z;
    return resultado;
}

int main() {
    Vetor vetor1, vetor2, soma;

    std::cout << "Digite as coordenadas do primeiro vetor (x y z): ";
    std::cin >> vetor1.x >> vetor1.y >> vetor1.z;
    std::cout << "Digite as coordenadas do segundo vetor (x y z): ";
    std::cin >> vetor2.x >> vetor2.y >> vetor2.z;
    soma = somaVetores(vetor1, vetor2);
    std::cout << "A soma dos vetores eh: (" << soma.x << ", " << soma.y << ", " << soma.z << ")" << std::endl;

    return 0;
}
