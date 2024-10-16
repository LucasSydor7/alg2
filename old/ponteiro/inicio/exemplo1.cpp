#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int x = 10;
   int *p1, *p2;   //declaração de dois ponteiros inteiros
   p1 = &x;        //atribui a p1 o endereço de x
   p2 = p1;        //atribui a p2 o endereço que p1 está apontando
   cout << setw(18) << "x" << setw(16) << "p1" << setw(15) << "p2" << endl;
   cout << "Endereco:" << setw(12) << &x << setw(15) << &p1 << setw(15) << &p2 <<  endl;
   cout << "Conteudo:" << setw(9) << x << setw(19) << p1 << setw(15) << p2 <<  endl;
   cout << "Valor:" << setw(12) << x << setw(16) << *p1 << setw(15) << *p2 <<  endl;
}