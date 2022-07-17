#include "/home/ozymandias/C++/projeto_PDSII/include/Repositor.hpp"

Repositor::Repositor(){}

Repositor::~Repositor(){}

void Repositor::adicionar_novo_produto(Produto produto){
  try{
    int clear = 2;
    _estoquePrincipal.adicionar_estoque(produto);
    std::cout<< "O produto foi adicionado no estoque." << std::endl;
    std::cout<< "Digite 1 para limpar a tela ou digite qualquer outro valor para voltar a página de funções" << std::endl;
    std::cin >> clear;
    if (clear == 1){
      system("clear");
    }
  }
  catch(ExceptionProdutoRepetido e){
    int clear = 2;
    std::cout<< "O produto estava repetido, sua quantidade foi incrementada no estoque." << std::endl;
    std::cout<< "Digite 1 para limpar a tela ou digite qualquer outro valor para voltar a página de funções" << std::endl;
    std::cin >> clear;
    if (clear == 1){
      system("clear");
    }
  }
  //Chama a main do repositor
}

void Repositor::alterar_preco(int cod_prod, double preco){ // Altera o preço do produto de código informado, caso esteja no sistema
  try{
    _estoquePrincipal.alterar_preco(cod_prod, preco);
    int clear = 2;
    std::cout<< "O preço do produto foi alterado." << std::endl;
    std::cout<< "Digite 1 para limpar a tela ou digite qualquer outro valor para voltar a página de funções" << std::endl;
    std::cin >> clear;
    if (clear == 1){
      system("clear");
    }
  }
  catch(ExceptionProdutoNaoEncontrado e){
    int clear = 2;
    std::cout<< "O produto informado não se encontra no estoque." << std::endl;
    std::cout<< "Digite 1 para limpar a tela ou digite qualquer outro valor para voltar a página de funções" << std::endl;
    std::cin >> clear;
    if (clear == 1){
      system("clear");
    }
  }
  //Chama a main do repositor
}

void Repositor::lotes_vencidos(std::string data_atual){ // Lista todos os lotes dos produtos vencidos
  try{
    system("clear");
    _estoquePrincipal.verificar_vencidos(data_atual);
  }
  catch(ExceptionSemVencidos e){
    int clear = 2;
    std::cout << "Não existem produtos vencidos no estoque." << std::endl;
    std::cout<< "Digite 1 para limpar a tela ou digite qualquer outro valor para voltar a página de funções" << std::endl;
    std::cin >> clear;
    if (clear == 1){
      system("clear");
    }
  }
  //Chama a main do repositor
}

void Repositor::remover_vencidos(std::string lote){
  try{
    _estoquePrincipal.remover_produto_do_estoque(lote);
  }
  catch(ExceptionProdutoNaoEncontrado e){
    system("clear");
    std::cout<< "O produto informado não se encontra no estoque." << std::endl;
  }
  int clear = 2;
  std::cout<< "Digite 1 para limpar a tela ou digite qualquer outro valor para voltar a página de funções" << std::endl;
  std::cin >> clear;
  if (clear == 1){
    system("clear");
  }
  //Chama a main do repositor
}

void Repositor::alterar_senha(std::string senha_acesso){
  try{    
    if (_senha_acesso == senha_acesso){
      std::string nova_senha;
      std::cout << "Por favor, insira sua nova senha: " << std::endl;
      std::cin >> nova_senha;
      _senha_acesso = nova_senha;
    }else{
      throw ExceptionSenhaIncorreta {};
    } 
  }
  catch(ExceptionSenhaIncorreta e){
    std::string nova_acao;
    std::cout << "Senha Incorreta, tente novamente ou caso tenha esquecido digite zero (0) para sair e se dirija a gerencia." << std::endl;
    std::cin >> nova_acao;    
    if (nova_acao == "0"){
      system("clear");
    }else{
      alterar_senha(nova_acao);
    }
    // chama a main do repositor
  }
}

void Repositor::calcular_salario(std::string dia){//Entre apenas com o dia do mês
  if (dia == "30"){
    double salarioBase = 0;
    std::cout << "Digite o valor do salário base (R$): ";
    std::cin >> salarioBase;
    _salario = salarioBase + salarioBase/100;
  }
}

Estoque Repositor::referencia_estoque(){
  return _estoquePrincipal;
}

