#include <iostream>

int cont(int num){
    if (num == 0){
        return 0;
    }
    else {
        return 1 + cont(num/10);
    }
}

int main(){
    int num;

    std::cin>>num;
    int quant_num = cont(num);

    std::cout << quant_num <<std::endl;
    return 0;
}