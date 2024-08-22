#include <iostream>
#include <cmath>

using namespace std;

// Função para verificar se um número é múltiplo de outro
bool multiplo(int numero, int divisor) {
  return numero % divisor == 0;
}

// Função para verificar se um número é par ou ímpar
bool par(int numero) {
  return numero % 2 == 0;
}

// Função para calcular a soma dos números em um intervalo
int somaIntervalo(int inicio, int fim) {
  int soma = 0;

  for (int i = inicio; i <= fim; i++) {
    soma += i;
  }

  return soma;
}

// Função para calcular o volume de uma esfera
double volumeEsfera(double raio) {
  return (4.0/3.0) * M_PI * pow(raio, 3);
}

// Função para calcular o fatorial de um número
int fatorial(int numero) {
  int fatorial = 1;

  for (int i = 1; i <= numero; i++) {
    fatorial *= i;
  }

  return fatorial;
}

// Função para calcular a potência de um número
int potencia(int base, int expoente) {
  int resultado = 1;

  for (int i = 0; i < expoente; i++) {
    resultado *= base;
  }

  return resultado;
}

int main() {
  int escolha, numero, divisor, inicio, fim, base, expoente;
  double raio;

  do {
    cout << "\nEscolha uma opção:" << endl;
    cout << "1. Múltiplo" << endl;
    cout << "2. Par ou Ímpar" << endl;
    cout << "3. Soma do Intervalo" << endl;
    cout << "4. Volume da Esfera" << endl;
    cout << "5. Fatorial" << endl;
    cout << "6. Potência" << endl;
    cout << "0. Sair" << endl;
    cout << "Digite sua escolha: ";
    cin >> escolha;

    switch (escolha) {
      case 1:
        cout << "Digite o número: ";
        cin >> numero;
        cout << "Digite o divisor: ";
        cin >> divisor;
        if (multiplo(numero, divisor)) {
          cout << numero << " é múltiplo de " << divisor << endl;
        } else {
          cout << numero << " não é múltiplo de " << divisor << endl;
        }
        break;
      case 2:
        cout << "Digite o número: ";
        cin >> numero;
        if (par(numero)) {
          cout << numero << " é par." << endl;
        } else {
          cout << numero << " é ímpar." << endl;
        }
        break;
      case 3:
        cout << "Digite o início do intervalo: ";
        cin >> inicio;
        cout << "Digite o fim do intervalo: ";
        cin >> fim;
        cout << "A soma dos números entre " << inicio << " e " << fim << " é: " << somaIntervalo(inicio, fim) << endl;
        break;
      case 4:
        cout << "Digite o raio da esfera: ";
        cin >> raio;
        cout << "O volume da esfera é: " << volumeEsfera(raio) << endl;
        break;
      case 5:
        cout << "Digite o número: ";
        cin >> numero;
        cout << "O fatorial de " << numero << " é: " << fatorial(numero) << endl;
        break;
      case 6:
        cout << "Digite a base: ";
        cin >> base;
        cout << "Digite o expoente: ";
        cin >> expoente;
        cout << base << " elevado a " << expoente << " é: " << potencia(base, expoente) << endl;
        break;
      case 0:
        cout << "Saindo do programa..." << endl;
        break;
      default:
        cout << "Opção inválida. Por favor, escolha novamente." << endl;
    }
  } while (escolha != 0);

  return 0;
}