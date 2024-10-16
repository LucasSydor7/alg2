#include <iostream>

 void decompor(double num, int *inteira, double *fracao){
    *inteira = static_cast<int>(num);
    *fracao = num - *inteira;
 }

 int main(){
    double a = 12.345;
    int parte_inteira;
    double parte_fracionaria;

    decompor(a, &parte_inteira, &parte_fracionaria);

    std::cout << "Parte inteira: " << parte_inteira << std::endl;
    std::cout << "Parte fracionaria: " << parte_fracionaria << std::endl;

    return 0;
 }