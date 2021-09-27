// MVP.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <locale.h>


using namespace std;

int opcao = 0;

void TelaLogin() {
    char login[15] = "login";
    char loginentry[15];
    char senha[15] = "senha";
    char senhaentry[15];

    cout << "Digite o Login: ";
    cin >> loginentry;
    cout << "Digite a Senha: ";
    cin >> senhaentry;

    if (loginentry == "teste" && senhaentry == "senha");
    {
        cout << "Bem vindo" << endl;
    }
}


void MostrarMenu() {

    cout << "\n\n--------------------------------" << endl;
    cout << "----Bem Vindo ao Garden Park----" << endl;
    cout << "--------------------------------" << endl;
    cout << "1) - Cadastrar Cliente" << endl;
    cout << "2) - Visualizar Vagas" << endl;
    cout << "3) - Pagar Estacionamento" << endl;
    cout << "4) - Gerenciamento de Reservas" << endl;
    cout << "5) - Realizar Login" << endl;

    cin >> opcao;
    cout << "\n\n\n";

}

void VisualizarVagas() {
    cout << "Visualizando Vagas....";
}

void PagarEstacionamento() {
    cout << "Iniciando Gerenciamento de Pagamento....";
}

void GerenciamentoReservas() {
    cout << "Iniciando o Gerenciamento de Reservas....";
}

void CadastroClientes() {

    string CPF, Nome, Placa, Senha;

    cout << "\n Adicione os Dados de Cliente" << endl;
    cout << "Digite o CPF: ";
    cin >> CPF;

    cout << "\nDigite o Nome: " << endl;
    cin >> Nome;

    cout << "\nDigite a Placa:" << endl;
    cin >> Placa;

    cout << "\nDigite a Senha para Registro: " << endl;
    cin >> Senha;



}

int main()
{
    setlocale(LC_ALL, "Portuguese");


    /*cout << R"(     ____               _              ____            _    _
  / ___| __ _ _ __ __| | ___ _ __   |  _ \ __ _ _ __| | _(_)_ __   __ _
 | |  _ / _` | '__/ _` |/ _ \ '_ \  | |_) / _` | '__| |/ / | '_ \ / _` |
 | |_| | (_| | | | (_| |  __/ | | | |  __/ (_| | |  |   <| | | | | (_| |
  \____|\__,_|_|  \__,_|\___|_| |_| |_|   \__,_|_|  |_|\_\_|_| |_|\__, |
                                                                  |___/   )"; */

    cout << "\n\n Ola bem vindo ao MVP do Projeto Garden Park! " << endl;

    MostrarMenu();

    switch (opcao)
    {
    case 1: //Gravar Clientes
        CadastroClientes(); break;
        break;
    case 2: // Visualisar Vagas
        VisualizarVagas(); break;

    case 3: // Pagar Estac.
        PagarEstacionamento(); break;

    case 4: // Gerenciamento Reservas;
        GerenciamentoReservas(); break;

    case 5: // Realizar Login
        TelaLogin(); break;

    default:
        cout << "Opcao Invalida!"; break;
    }
}


