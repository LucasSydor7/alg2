#include <iostream>
using namespace std;

int main(){
    int conta = 1;
    float salario = 40000.0;
    char resposta = 'n';
    string nome = "Maria";
    cout << "nome: " << &nome << endl;
    cout << "conta: " << &conta << endl;
    cout << "salario: " << &salario << endl;
    cout << "resposta: " << &resposta << endl;
    cout << static_cast<void*>(&resposta) << endl;
}
//os valores das linhas 4 a 6, q no meu caso seria da 8 a 10
//na 8 e 9 imprime o valor do endereço das variaveis int e float, e na linha 10 imprime o valor da resposta
//extra: o cout lida de uma forma diferente com os ponteiros em char, então para imprimir o valor do endereço precisamos
//alterar a forma que imprimimos usando esse comando "static_cast<void*>(&resposta)" para tratar ele como um ponteiro generico.