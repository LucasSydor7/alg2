#include <iostream>

int somar(int &num){
    num += 10;
    return num;
}
int main(){
    int a = 5;
    int result = somar(a);
    std::cout << result << std::endl;
    return 0;
}