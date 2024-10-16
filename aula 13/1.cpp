#include <iostream>

int main(){
    int num = 10;
    int *ptr;

    ptr = &num;

    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    *ptr++;
    std::cout << ptr << std::endl;

    *ptr--;
    std::cout << ptr << std::endl;

    return 0;
}