#include <iostream>
#include <cctype>

void maiuscula(std::string& str){
    for(char& c : str){
        c = std::toupper(c);
    }
}

int main(){
    std::string texto = "Passagem de String por reverencia";

    maiuscula(texto);

    std::cout << texto << std::endl;

    return 0;
}