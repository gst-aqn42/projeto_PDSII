#include "Produto.hpp"

int Produto::cod_prod = 1;
Produto::Produto(double preco, int qtd, std::string data_validade, std::string data_reposicao, std::string tipo_produto, std::string nome_produto){
  _preco = preco; _qtd = qtd;
  _data_validade = data_validade; _data_reposicao = data_reposicao;
  _tipo_produto = tipo_produto; _nome_produto = nome_produto;

  _cod_prod = cod_prod; 
  cod_prod++;
}

void Produto::reset_preço(double novo_preco){
  _preco = novo_preco;
}

void Produto::insert_qtd(int nova_qtd){
  _qtd += nova_qtd;
}

std::string Produto::get_data_reposicao(){
  return _data_reposicao;
}

std::string Produto::get_data_validade(){
  return _data_validade;
}

double Produto::get_preco(){
  return _preco;
}

void Produto::print_dados(){
  std::cout << _cod_prod << _nome_produto << _preco << this->_data_validade << std::endl;
}