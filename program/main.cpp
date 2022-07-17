#include "/home/ozymandias/C++/projeto_PDSII/include/Funcionario.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Caixa.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Cliente.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Estoque.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Gerente.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Produto.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Repositor.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Vendas.hpp"

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>


int main(){
  std::cout << "Bem vindo ao sistema de vendas.";
  Gerente _gerente("Admin", "gerente", "SuaLoja", "admin");

  std::ifstream firstFile;
  firstFile.open("bancoFuncionarios.csv");

  std::string line = "";
  while (std::getline(firstFile, line)){
    int codFunc;
    std::string nome;
    std::string funcao;
    double salario;
    std::string login;
    std::string senha;

    std::string tempString;
    std::stringstream inputString(line);

    std::getline(inputString, codFunc, ',');
    std::getline(inputString, nome, ',');



    line = "";
  }
  

  bool repositorVazio = _gerente.verifica_map_repositor();
  bool caixaVazio = _gerente.verifica_map_caixa();
  bool gerenteVazio = _gerente.verifica_map_gerente();

  if(repositorVazio == true && caixaVazio == true && gerenteVazio == true){
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
    Funcionario* entrada = _gerente.cadastrar_funcionario(nome, funcao, login, senha);

    std::ofstream firstFile;
    firstFile.open("bancoFuncionarios.csv");
    firstFile << entrada->get_codigo_funcionario() << "," << entrada->get_nome() << "," << entrada->get_funcao() << "," << entrada->get_salario() << "," << entrada->get_login() << "," << entrada->get_senha() << std::endl;
    std::cout << "Usuário cadastrado com sucesso, o sistema irá reiniciar para o login da nova conta." << std::endl;
  }





  return 0;
}