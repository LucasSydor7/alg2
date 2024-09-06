#include <iostream>

void alterar_ordem(int &a, int &b){
    if (a > b){
        std::swap(a, b);
    }
}

int main(){
    int num1 = 10;
    int num2 = 5;

    alterar_ordem(num1,num2);

    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    
    return 0;
}