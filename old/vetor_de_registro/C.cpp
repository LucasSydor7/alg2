#include <iostream>

// Estrutura para representar um número complexo
struct Complexo {
    float real;
    float imag;
};

// Função para ler um número complexo
Complexo lerComplexo() {
    Complexo num;
    std::cout << "Digite a parte real: ";
    std::cin >> num.real;
    std::cout << "Digite a parte imaginaria: ";
    std::cin >> num.imag;
    return num;
}

// Função para imprimir um número complexo
void imprimirComplexo
(Complexo num) {
    std::cout << num.real;
    if (num.imag >= 0) {
        std::cout << " + " << num.imag << "i" << std::endl;
    } else {
        std::cout << " - " << -num.imag << "i" << std::endl;
    }
}

// Função para calcular a soma de dois números complexos
Complexo soma(Complexo z, Complexo w) {
    Complexo resultado = {0, 0}; // Corrigido: inicializa 'resultado'
    resultado.real = z.real + w.real;
    resultado.imag = z.imag + w.imag;
    return resultado; 
}

// Função para calcular a subtração de dois números complexos
Complexo subtracao(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.real = z.real - w.real;
    resultado.imag = z.imag - w.imag;
    return resultado;
}

// Função para calcular o produto de dois números complexos
Complexo produto(
Complexo z, Complexo w) {
    Complexo resultado;
    resultado.real = (z.real * w.real) - (z.imag * w.imag);
    resultado.imag = (z.real * w.imag) + (z.imag * w.real);
    return resultado;
}

int main() {
    Complexo z, w;

    std::cout << "Digite o primeiro numero complexo (z):" << std::endl;
    z = lerComplexo();

    std::cout << "Digite o segundo numero complexo (w):" << std::endl;
    w = lerComplexo();

    Complexo s = soma(z, w);
    std::cout << "Soma: ";
    imprimirComplexo(s);

    Complexo sub = subtracao(z, w);
    std::cout << "Subtracao: ";
    imprimirComplexo(sub);

    Complexo p = produto(z, w);
    std::cout << "Produto: ";
    imprimirComplexo(p);

    return 0;
}
