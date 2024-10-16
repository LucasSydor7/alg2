#include <iostream>

void inserir(int *v, int n){
    for (int i = 0; i < n; i++){
        v[i] = i;
    }
}

void show(int *v, int n){
    for (int i = 0; i < n; i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int n;

    std::cin >> n;
    int *v = new int[n];

    if(!v){
        std::cout << "Falha na alocacao" << std::endl;
        return 1;
    }
    inserir(v, n);
    show(v, n);

    delete[] v;
    return 0;
}