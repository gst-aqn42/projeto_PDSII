#include "/home/ozymandias/C++/projeto_PDSII/include/Funcionario.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Caixa.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Cliente.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Estoque.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Gerente.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Produto.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Repositor.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Vendas.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Exceptions.hpp"

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <stdlib.h>



/*
ATENÇÃO: ESTA MAIN ESTÁ COMPLETAMENTE ERRADA E CHEIA DE BUGS, PRATICAMENTE NADA NELA PASSA POR TESTES,
AS FUNCIONALIDADES FORAM DESENVOLVIDAS E TESTADAS (COM EXCEÇÃO DAS CLASSES CAIXA E GERENTE) E TODAS PASSARAM NOS TESTES APLICADOS.


ATT/GUSTAVO
*/





// funções
void acesso_sistema(int select, Gerente &_gerente)
{
  int codigo_funcionario = 0;
  std::string login;
  std::string senha;
  if (select == 1)
  {
    std::cout << "Insira seu código de funcionário:" << std::endl;
    std::cin >> codigo_funcionario;
    std::cout << "Insira seu login:" << std::endl;
    std::cin >> login;
    std::cout << "Insira sua senha:" << std::endl;
    std::cin >> senha;

    auto aux = _gerente.retorna_gerente(codigo_funcionario);
    if (aux->get_login() == login)
    {
      if (aux->get_senha() == senha)
      {
        int decisao = 0;
        while (decisao != 6)
        {
          system("clear");
          std::cout << "Seja bem vindo: " << aux->get_nome() << std::endl;
          std::cout << "Estas são suas funções: " << std::endl;
          std::cout << "-----------------------------------------" << std::endl;
          std::cout << "(1) Gerar balanço dos caixas." << std::endl;
          std::cout << "(2) Contratar funcionário." << std::endl;
          std::cout << "(3) Demitir funcionario." << std::endl;
          std::cout << "(4) Calcular Salarios." << std::endl;
          std::cout << "(5) Gerar balanço de estoque." << std::endl;
          std::cout << "(6) LogOff." << std::endl;
          std::cin >> decisao;
          while (decisao < 1 || decisao > 6)
          {
            std::cout << "escolha uma opção valida dentre as acima" << std::endl;
            std::cin >> decisao;
          }

          if (decisao == 6)
          {
            std::cout << "O logOff será realizado, até breve." << std::endl;
            exit(0);
          }
          else
          {
            if (decisao == 1)
            {
              double dif = aux->balanco_dos_caixas();
              std::cout << "A diferença em caixa é de: " << dif << std::endl;
            }
            else
            {
              if (decisao == 2)
              {
                std::string nome;
                std::string funcao;
                std::string login;
                std::string senha;
                std::cout << "Digite o nome, a funcao, o login e a senha do novo funcionario" << std::endl;
                aux->cadastrar_funcionario(nome, funcao, login, senha);
              }
              else
              {
                if (decisao == 3)
                {
                  std::string funcao;
                  int codFunc;
                  std::cout << "Digitea funcao e o codigo do funcionário:" << std::endl;
                  std::cin >> funcao;
                  std::cin >> codFunc;
                  aux->desvincular_funcionario(funcao, codFunc);
                }
                else
                {
                  if (decisao == 4)
                  {
                    std::string dia;
                    std::cout << "digite o dia do mês" << std::endl;
                    std::cin >> dia;
                    aux->calcular_salario(dia);
                  }
                  else
                  {
                    if (decisao == 5)
                    {
                      aux->balaco_do_estoque();
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        std::cout << "Senha incorreta" << std::endl;
      }
    }
    else
    {
      std::cout << "Login incorreto" << std::endl;
    }
  }
  else
  {
    if (select == 2)
    {
      std::cout << "Insira seu código de funcionário:" << std::endl;
      std::cin >> codigo_funcionario;
      std::cout << "Insira seu login:" << std::endl;
      std::cin >> login;
      std::cout << "Insira sua senha:" << std::endl;
      std::cin >> senha;

      auto aux = _gerente.retorna_caixa(codigo_funcionario);
      if (aux->get_login() == login)
      {
        if (aux->get_senha() == senha)
        {
          int decisao = 0;
          while (decisao != 4)
          {
            system("clear");
            std::cout << "Seja bem vindo: " << aux->get_nome() << std::endl;
            std::cout << "Estas são suas funções: " << std::endl;
            std::cout << "-----------------------------------------" << std::endl;
            std::cout << "(1) cadastrar Cliente." << std::endl;
            std::cout << "(2) Nova venda." << std::endl;
            std::cout << "(3) Fechamento de Caixa." << std::endl;
            std::cout << "(4) LogOff" << std::endl;
            std::cin >> decisao;
            while (decisao < 1 || decisao > 4)
            {
              std::cout << "Escolha uma opção válida dentre as acima" << std::endl;
              std::cin >> decisao;
            }
            if (decisao == 4)
            {
              std::cout << "O logOff será realizado, até breve." << std::endl;
              exit(0);
            }
            else
            {
              std::cout << "A partir  daqui está tudo errado." << std::endl;
            }
          }
          {
            std::cout << "Login incorreto" << std::endl;
          }
        }
        else
        {
          if (select == 3)
          {
            std::cout << "Insira seu código de funcionário:" << std::endl;
            std::cin >> codigo_funcionario;
            std::cout << "Insira seu login:" << std::endl;
            std::cin >> login;
            std::cout << "Insira sua senha:" << std::endl;
            std::cin >> senha;

            auto aux = _gerente.retorna_repositor(codigo_funcionario);
            if (aux->get_login() == login)
            {
              if (aux->get_senha() == senha)
              {
              }
              else
              {
                std::cout << "Senha incorreta" << std::endl;
              }
            }
            else
            {
              std::cout << "Login incorreto" << std::endl;
            }
          }
        }
      }
    }
  }
}


int main()
{
  std::cout << "Bem vindo ao sistema de vendas.";
  Gerente _gerente("Admin", "gerente", "SuaLoja", "admin");
  /*
    std::ifstream firstFile;
    firstFile.open("bancoFuncionarios.csv");

    std::string line = "";
    while (std::getline(firstFile, line))
    {
      int codFunc;
      std::string nome;
      std::string funcao;
      double salario;
      std::string login;
      std::string senha;

      std::string tempString;
      std::stringstream inputString(line);

      std::getline(inputString, tempString, ',');
      codFunc = std::atoi(tempString.c_str());
      std::getline(inputString, nome, ',');
      std::getline(inputString, funcao, ',');
      line = "";
      std::getline(inputString, tempString, ',');
      salario = std::atof(tempString.c_str());
      std::getline(inputString, login, ',');
      std::getline(inputString, senha, ',');

      _gerente.adicionar_funcionarios_do_banco(codFunc, nome, funcao, salario, login, senha);

      line = "";
    }
    */
  // A parte comentada acima pertence ao arquivo .csv, quando ele não existe o programa o cria, mas quando existe sua leitura causa segmentation fault

  bool repositorVazio = _gerente.verifica_map_repositor();
  bool caixaVazio = _gerente.verifica_map_caixa();
  bool gerenteVazio = _gerente.verifica_map_gerente();

  if (repositorVazio == true && caixaVazio == true && gerenteVazio == true)
  {
    std::cout << "Bem vindo ao seu primeiro login, nós usaremos a conta padão da gerência para o primeiro cadastro." << std::endl;
    std::cout << "O primeiro cadastro deve ser da gerência" << std::endl;
    std::string funcao = "gerente";
    std::string nome;
    std::string login;
    std::string senha;
    std::cout << "Por favor, insira seu nome, Login e Uma Senha de acesso (sempre que terminar aperte enter)." << std::endl;
    getline(std::cin, nome);
    getline(std::cin, login);
    getline(std::cin, senha);
    _gerente.cadastrar_funcionario(nome, funcao, login, senha);

    /*std::ofstream firstFile;
    firstFile.open("bancoFuncionarios.csv");
    firstFile << entrada->get_codigo_funcionario() << "," << entrada->get_nome() << "," << entrada->get_funcao() << "," << entrada->get_salario() << "," << entrada->get_login() << "," << entrada->get_senha() << std::endl;
    std::cout << "Usuário cadastrado com sucesso, o sistema irá reiniciar para o login da nova conta." << std::endl;
    */
    // Parte do código para o arquivo .csv
  }

  bool logOff = false;
  while (!logOff)
  {
    int selecao = 4;
    std::cout << "Bem vindo ao sistema de vendas, por favor, selecione sua categoria: " << std::endl;
    std::cout << "(1) Gerente." << std::endl;
    std::cout << "(2) Caixa." << std::endl;
    std::cout << "(3) Repositor." << std::endl;
    std::cin >> selecao;
    while (selecao < 0 || selecao > 3)
    {
      std::cout << "Por favor, selecione uma das opções acima ou -1 para realizar logOff" << std::endl;
      std::cin >> selecao;
      try
      {
        if (selecao == -1)
        {
          throw ExceptionLogOff{};
        }
      }
      catch (ExceptionLogOff e)
      {
        std::cout << "O logOff será realizado, até breve." << std::endl;
        logOff = true;
        exit(0);
      }
    }
    system("clear");

    acesso_sistema(selecao, _gerente);
  }

  return 0;
}
