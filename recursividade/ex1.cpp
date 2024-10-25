#include <iostream>

int somatoria(int n){
    if(n == 1) {
        return 1;
    }
    else{
        return n + somatoria(n-1);
    }
}

int main(){
    int n;

    std::cin >> n;
    if(n<1){
        std::cout << "Valor invalido" << std::endl;
    }
    else{
        int resultado = somatoria(n);
        std::cout << resultado << std::endl;
    }
    return 0;
}