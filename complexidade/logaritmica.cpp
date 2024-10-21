
#include <iostream>
#include <vector>

using namespace std;

int busca_binaria(const vector<int>& arr, int alvo) {
  int esquerda = 0;
  int direita = arr.size() - 1;

  while (esquerda <= direita) {
    int meio = esquerda + (direita - esquerda) / 2;

    if (arr[meio] == alvo) {
      return meio; // Elemento encontrado, retorna o índice
    } else if (arr[meio] < alvo) {
      esquerda = meio + 1; // Busca na metade direita
    } else {
      direita = meio - 1; // Busca na metade esquerda
    }
  }

  return -1; // Elemento não encontrado
}

int main() {
  vector<int> arr = {2, 5, 7, 8, 11, 12, 15, 13, 21};
  int alvo = 13;

  int indice = busca_binaria(arr, alvo);

  if (indice != -1) {
    cout << "Elemento encontrado no índice: " << indice << endl;
  } else {
    cout << "Elemento não encontrado." << endl;
  }

  return 0;
}
