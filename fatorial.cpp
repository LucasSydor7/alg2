#include <iostream>
using namespace std;

int fat(int a){
    int b = 1;
    for(int i = 1; i <= a; i++){
        b *= i;
    }
    return b;
}
int main(){
   int a;
   cin >> a;
   cout << fat(a) << endl; 
   return 0;
}
