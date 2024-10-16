#include <iostream>
using namespace std;

int somar(int num){
    return num + 10;
}
int main(){
    int a = 5;
    int result = somar(a);
    cout << result << endl;
    return 0;
}