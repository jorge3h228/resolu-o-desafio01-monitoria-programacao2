#include <iostream>   
#include <conio.c>   
using namespace std;

// ------------------------------
// 1. Variável global
// ------------------------------


// ------------------------------
// 2. Declaração das funções 
// ------------------------------
void exibirMenu();
void verSaldo(float saldo);
void realizarDeposito(float &saldo);
void realizarSaque(float &saldo);

// ------------------------------
// 3. Função principal (main)
// ------------------------------
int main()
{
    setlocale(LC_ALL, ""); // Permite o uso de acentos no console
    // -----------------------------------------------------------------------
    
    
    float saldoConta = 1000.00;
    int opcao;  // Variável para armazenar a escolha do usuário

    do
    {
        // Exibe o menu e lê a opção
        exibirMenu();
        cin >> opcao;

        // Estrutura de decisão para cada opção
        switch (opcao)
        {
        case 1:
            verSaldo(saldoConta);
            break;
        case 2:
            realizarDeposito(saldoConta);
            break;
        case 3:
            realizarSaque(saldoConta);
            break;
        case 0:
            cout << "\nSaindo do sistema...\n";
            break;
        default:
            cout << "\nOpção inválida! Tente novamente.\n";
            break;
        }

    } while (opcao != 0); // Continua até o usuário digitar 0

    system("pause"); // Pausa o programa antes de encerrar (visual no DEV-C++)
    return 0;
}

// ------------------------------
// 4. Função para exibir o menu de opções
// ------------------------------
void exibirMenu()
{
    cout << "\n====== MINI SISTEMA BANCÁRIO ======\n";
    cout << "1 - Ver Saldo\n";
    cout << "2 - Depositar\n";
    cout << "3 - Sacar\n";
    cout << "0 - Sair\n";
    cout << "Escolha uma opção: ";

}

// ------------------------------
// 5. Função para exibir o saldo atual
// ------------------------------
void verSaldo(float saldoConta)
{
    cout << "\nSeu saldo atual é: R$ " << saldoConta << endl;
    system("pause");
}

// ------------------------------
// 6. Função para realizar um depósito
// ------------------------------
void realizarDeposito(float &saldoConta)
{
    float valorDeposito; // Variável local (só existe dentro dessa função)
    cout << "\nDigite o valor para depositar: R$ ";
    cin >> valorDeposito;

    // Adiciona o valor ao saldo
    saldoConta += valorDeposito;

    cout << "Depósito realizado com sucesso!\n";
    system("pause");
}

// ------------------------------
// 7. Função para realizar um saque
// ------------------------------
void realizarSaque(float &saldoConta)
{
    float valorSaque;
    cout << "\nDigite o valor para sacar: R$ ";
    cin >> valorSaque;

    // Verifica se o valor do saque é menor ou igual ao saldo
    if (valorSaque <= saldoConta)
    {
        saldoConta -= valorSaque; // Subtrai o valor sacado
        cout << "Saque realizado com sucesso!\n";
        system("pause");
    }
    else
    {
        cout << "Saldo insuficiente para o saque.\n";
        system("pause");
    }
}

