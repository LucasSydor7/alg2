#include<iostream>
using namespace std;

// Função para receber a entrada do usuário
void entrada(int &a, int &b, int &op){
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << "Digite a operacao (1-soma, 2-subtracao, 3-multiplicacao, 4-divisao): ";
    cin >> op;
}

// Função para calcular a soma
int soma(int a, int b){
    return a + b;
}

// Função para calcular a subtração
int subtracao(int a, int b){
    return a - b;
}

// Função para calcular a multiplicação
int multiplicacao(int a, int b){
    return a * b;
}

// Função para calcular a divisão
int divisao(int a, int b){
    if(b == 0){ 
        cout << "Erro: Divisao por zero!" << endl;
        return 0; 
    }
    return a / b;
}

// Função para realizar a operação desejada
void operacao(int a, int b, int op){
    switch(op){
        case 1:
            cout << "Resultado: " << soma(a,b) << endl;
            break;
        case 2:
            cout << "Resultado: " << subtracao(a,b) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicacao(a,b) << endl;
            break;
        case 4:
            cout << "Resultado: " << divisao(a,b) << endl;
            break;
        default:
            cout << "Operacao invalida" << endl;
    }
}

int main(){
    int a, b, op;
    entrada(a, b, op);
    operacao(a, b, op);
    return 0;
}