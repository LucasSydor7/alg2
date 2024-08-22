#include <iostream>
#include <cmath>

using namespace std;

// verificar o multiplo de 4
void multiploDe4() {
  int numero;

  cout << "Digite um número inteiro: ";
  cin >> numero;

  if (numero % 4 == 0) {
    cout << numero << " é múltiplo de 4." << endl;
  } else {
    cout << numero << " não é múltiplo de 4." << endl;
  }
}

// verificar se sao par ou impar
void parOuImpar() {
  int numero;

  cout << "Digite um número inteiro: ";
  cin >> numero;

  if (numero % 2 == 0) {
    cout << numero << " é par." << endl;
  } else {
    cout << numero << " é ímpar." << endl;
  }
}

// numeros em um intervalo
void somaIntervalo() {
  int numero1, numero2, soma = 0;

  cout << "Digite o primeiro número inteiro positivo: ";
  cin >> numero1;
  cout << "Digite o segundo número inteiro positivo: ";
  cin >> numero2;

  for (int i = numero1; i <= numero2; i++) {
    soma += i;
  }

  cout << "A soma dos números entre " << numero1 << " e " << numero2 << " é: " << soma << endl;
}

// volume da esfera
void volumeEsfera() {
  double raio, volume;

  cout << "Digite o raio da esfera: ";
  cin >> raio;

  volume = (4.0/3.0) * M_PI * pow(raio, 3);
  cout << "O volume da esfera é: " << volume << endl;
}

// calcular o fatorial
void fatorial() {
  int numero, fatorial = 1;

  cout << "Digite um número natural: ";
  cin >> numero;

  for (int i = 1; i <= numero; i++) {
    fatorial *= i;
  }

  cout << "O fatorial de " << numero << " é: " << fatorial << endl;
}

// calcular a potenciação
void potencia() {
  int base, expoente, resultado = 1;

  cout << "Digite a base: ";
  cin >> base;
  cout << "Digite o expoente: ";
  cin >> expoente;

  for (int i = 0; i < expoente; i++) {
    resultado *= base;
  }

  cout << base << " elevado a " << expoente << " é: " << resultado << endl;
}

int main() {
  int escolha;

  do {
    cout << "\nEscolha uma opção:" << endl;
    cout << "1. Múltiplo de 4" << endl;
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
        multiploDe4();
        break;
      case 2:
        parOuImpar();
        break;
      case 3:
        somaIntervalo();
        break;
      case 4:
        volumeEsfera();
        break;
      case 5:
        fatorial();
        break;
      case 6:
        potencia();
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