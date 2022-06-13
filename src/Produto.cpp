#include "Produto.hpp"

int Produto::cod_prod = 1;
Produto::Produto(double preco, std::string lote, std::string data_validade, std::string nome_produto){
  _preco = preco;
  _data_validade = data_validade; _lote = lote;
  _nome_produto = nome_produto;

  _cod_prod = cod_prod; 
  cod_prod++;
}

void Produto::reset_preço(double novo_preco){
  _preco = novo_preco;
}

std::string Produto::get_data_validade(){
  return _data_validade;
}

double Produto::get_preco(){
  return _preco;
}

void Produto::print_dados(){
  std::cout << _cod_prod << " " <<_nome_produto << " " << _preco << " " << this->_data_validade << std::endl;
}