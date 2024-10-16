#include <iostream>
using namespace std;

int main(){
    int i, *p_contador;
    i = 5;
    p_contador = &i;
    cout << "valor de i: " << *p_contador << endl;
    cout << "endereco de i: " << p_contador << endl;
}

//na linha 4 é impresso o valor da variavel i, já na linha 5 é impresso o endereço da variavel.