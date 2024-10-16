#include <iostream>

int main(){
    int a = 0, b = 0;
    int N = 4, M = 4;

    for(int i; i < N; i++){
        a = a + 10;
    }
    for(int i; i < M; i++){
        b = b + 20;
    }

    std::cout << a << std::endl;
    std::cout << b << std::endl;
}