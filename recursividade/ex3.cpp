#include <iostream>

int soma(int x){
    if(x <= 0){
        return 0;
    }
    else if(x % 2 == 0){
        return x + soma(x-2);
    }
    else{
        return soma(x-1);
    }
}

int main(){
    int x;

    std::cin >> x;
     if (x < 1){
        std::cout << "Valor invalido" << std::endl;
     }
     else{
        int resultado = soma(x);
        std::cout << resultado << std::endl;
     }
    return 0;
}