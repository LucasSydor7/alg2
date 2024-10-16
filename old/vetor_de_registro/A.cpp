#include <iostream>
#include <string> 

struct Horario {
    int hora;
    int minuto;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    Data data;
    Horario horario;
    std::string descricao; 
};

int main() {
    Compromisso compromisso1;
    compromisso1.data = {25, 9, 2024}; 
    compromisso1.horario = {10, 30};
    compromisso1.descricao = "Aula de alg2"; 

    std::cout << "Compromisso:" << std::endl;
    std::cout << "Data: " << compromisso1.data.dia << "/" << compromisso1.data.mes << "/" << compromisso1.data.ano << std::endl;
    std::cout << "Horário: " << compromisso1.horario.hora << ":" << compromisso1.horario.minuto << std::endl;
    std::cout << "Descrição: " << compromisso1.descricao << std::endl;

    return 0;
}
