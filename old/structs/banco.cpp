#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    int id;
    char tipo;
    string titular;
    Data abertura;
    float saldo;
} Conta;

int main(){
   // Conta novaConta = {12345, 'C', "Paulo Figueira de Lima", 05, 02, 2021, 100.00};
    //novaConta.abertura.dia = 04;
    Conta novaConta;
    
    cout << "Informe o id da conta: " << endl; 
    cin >> novaConta.id;
    
    cout << "Informe o nome do titular: " << endl;
    cin.get();
    getline(cin, novaConta.titular);
    //cin >> novaConta.titular;
    
    cout << "Informe o tipo da conta: " << endl;
    cin >> novaConta.tipo;
     
    cout << "Informe a data de abertura da conta: " << endl;
    cin >> novaConta.abertura.dia >> novaConta.abertura.mes >> novaConta.abertura.ano;
    
    cout << "Informe o saldo da conta: " << endl;
    cin >> novaConta.saldo;
    

   //     if(novaConta.tipo == 'C'){
    //        novaConta.tipo = 'C';
     //       cout << "CONTA CORRENTE" << endl;
      //  }else if(novaConta.tipo == 'P'){
       //     cout << "CONTA POUPANCA" << endl;
       // }else{
        //    cout << "TIPO DE CONTA INVALIDO" << endl;
   //     }
    

    cout << fixed << setprecision(2);
    cout << novaConta.id << " " << novaConta.titular << endl;
    cout << "Tipo: ";
    if(novaConta.tipo == 'C'){
        cout << "CONTA CORRENTE" << endl;
    }else{
        cout << "CONTA POUPANCA" << endl;
    }
    cout << "Cliente desde " << novaConta.abertura.dia << "/";
    cout << novaConta.abertura.mes << "/" << novaConta.abertura.ano;
    cout << endl << "Saldo: R$" << novaConta.saldo << endl;
return 0;
}