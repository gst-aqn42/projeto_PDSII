#include "/home/ozymandias/C++/projeto_PDSII/include/Repositor.hpp"


void Repositor::adicionar_novo_produto(Estoque &est, Produto &produto){
  try{
    est.adicionar_estoque(produto);
    system("clear");
    std::cout<< "O produto foi adicionado no estoque." << std::endl;
  }
  catch(ExceptionProdutoRepetido e){
    system("clear");
    std::cout<< "O produto estava repetido, sua quantidade foi incrementada no estoque." << std::endl;
  }
  //Chama a main do repositor
}

void Repositor::alterar_preco(Estoque &est, int cod_prod, double preco){ // Altera o preço do produto de código informado, caso esteja no sistema
  try{
    est.alterar_preco(cod_prod, preco);
    system("clear");
    std::cout<< "O preço do produto foi alterado." << std::endl;
  }
  catch(ExceptionProdutoNaoEncontrado e){
    system("clear");
    std::cout<< "O produto informado não se encontra no estoque." << std::endl;
  }
  //Chama a main do repositor
}

void Repositor::lotes_vencidos(Estoque &est, std::string data_atual){ // Lista todos os lotes dos produtos vencidos
  try{
    system("clear");
    est.verificar_vencidos(data_atual);
  }
  catch(ExceptionSemVencidos e){
    std::cout << "Não existem produtos vencidos no estoque." << std::endl;
  }
  //Chama a main do repositor
}

void Repositor::remover_vencidos(Estoque &est, std::string lote){
  try{
    system("clear");
    est.remover_produto_do_estoque(lote);
  }
  catch(ExceptionProdutoNaoEncontrado e){
    system("clear");
    std::cout<< "O produto informado não se encontra no estoque." << std::endl;
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
      throw ExceptionSenhaIncorreta{};
    } 
  }
  catch(ExceptionSenhaIncorreta e){
    std::string nova_acao;
    std::cout << "Senha Incorreta, tente novamente ou caso tenha esquecido digite zero (1) para sair e se dirija a gerencia." << std::endl;
    std::cin >> nova_acao;    
    if (nova_acao == "1"){
      system("clear");
    }else{
      alterar_senha(nova_acao);
    }
    // chama a main do repositor
  }
}

double Repositor::calcular_salario(double salario_base){
  _salario = salario_base;
  return _salario;
}