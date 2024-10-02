#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct data{
  int dia, mes, ano;
};

int main(){

  char letra[5] = {'a', 'e', 'i', 'o', 'u'};
  int numero[5] = {30, 12, 67, 13, 41};
  struct data fds[2] = {{20, 02, 2021}, {21, 02, 2021}};

  cout << "Tamanho do tipo char: " << sizeof(char) << endl;
  cout << "Tamanho do tipo int: " << sizeof(int) << endl;
  cout << "Tamanho do tipo float: " << sizeof(float) << endl;
  cout << "Tamanho do tipo double: " << sizeof(double) << endl;
  cout << "Tamanho da struct data: " << sizeof(data) << endl;
  cout << "Tamanho do vetor letra: " << sizeof(letra) << endl;
  cout << "Tamanho do vetor numero: " << sizeof(numero) << endl;
  cout << "Tamanho do vetor fds: " << sizeof(fds) << endl;

  return 0;
}
