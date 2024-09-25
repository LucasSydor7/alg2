#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


struct Carta {
    string cor;
    string valor;
};


vector<Carta> criarBaralho() {
    vector<Carta> baralho;
    vector<string> cores = {"Vermelho", "Amarelo", "Verde", "Azul"};
    vector<string> valores = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "+2", "Inverter", "Bloquear"};

    
    for (string cor : cores) {
        for (string valor : valores) {
            baralho.push_back({cor, valor});
            if (valor != "0") {
                baralho.push_back({cor, valor}); 
            }
        }
    }

    
    for (int i = 0; i < 4; i++) {
        baralho.push_back({"Coringa", "+4"});
        baralho.push_back({"Coringa", "Troca Cor"});
    }

    return baralho;
}


void embaralharBaralho(vector<Carta>& baralho) {
    srand(time(0));
    for (int i = baralho.size() - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(baralho[i], baralho[j]);
    }
}


void distribuirCartas(vector<Carta>& baralho, vector<Carta>& jogador1, vector<Carta>& jogador2) {
    for (int i = 0; i < 5; i++) {
        jogador1.push_back(baralho.back());
        baralho.pop_back();
        jogador2.push_back(baralho.back());
        baralho.pop_back();
    }
}


void exibirCartas(vector<Carta> jogador, string nomeJogador) {
    cout << nomeJogador << ":" << endl;
    for (Carta carta : jogador) {
        cout << carta.cor << " " << carta.valor << endl;
    }
    cout << endl;
}

int main() {
    
    vector<Carta> baralho = criarBaralho();
    embaralharBaralho(baralho);
    vector<Carta> jogador1;
    vector<Carta> jogador2;


    distribuirCartas(baralho, jogador1, jogador2);
    exibirCartas(jogador1, "Jogador 1");
    exibirCartas(jogador2, "Jogador 2");

    return 0;
}
