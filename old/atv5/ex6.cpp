#include <iostream>

int sub (int &num){
    num -= 5;
    return num;
}
 int main(){
    int a = 10;
    int result = sub(a);
    std::cout << result << std::endl;
    std:: cout << a << std::endl;
    return 0;
 }