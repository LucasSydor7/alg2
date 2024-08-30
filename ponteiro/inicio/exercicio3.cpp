#include <iostream>
using namespace std;
int main(){
     int num,valor;
     int *p;
     num = 55;
     p=&num;
     valor = *p;

     cout << valor << endl;
     cout << p << endl;
     cout << *p << endl;
}