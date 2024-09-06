#include <iostream>

int maiorvalor(int *vetor, int tamanho){
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

float media(int vetor[],int tamanho){
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    return (float)soma / tamanho;
}

int positivos(const int (&vetor)[], int tamanho){

    int count = 0;
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] > 0){
            count++;
        }
    }
    return count;
}

void inserir(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        std::cout << "Digite um numero: " << std::endl;
        std::cin >> vetor[i];
    }
}

void maiorMenor(int (&vetor)[], int tamanho, int &maior, int &menor){
    maior = vetor[0];
    menor = vetor[0];

    for(int i = 1; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
}

int main(){
    int tamanho;

    std::cout << "Digite o tamanho do vetor: "<<std::endl;
    std::cin >> tamanho;

    int vetor[tamanho];

    inserir(vetor, tamanho);

    std::cout << "Vetor: " << std::endl;
    for(int i = 0; i < tamanho; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl; 

    std::cout << "Maior valor: " << maiorvalor(vetor,tamanho) << std::endl;
    std::cout << "Media: " << media(vetor,tamanho) << std::endl;
    std::cout << "Positivos: " << positivos(vetor,tamanho) << std::endl;

    int maior,menor;
    maiorMenor(vetor,tamanho,maior,menor);
    std::cout << "Maior: " << maior << ", Menor: " << menor << std::endl;

    return 0;
}
