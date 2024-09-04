#include <iostream>

int sub(int num){
    return num - 5;
}
int main(){
    int a = 10;
    int result = sub(a);
    std::cout << result << std::endl;
    return 0;
}