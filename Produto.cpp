#include "Produto.hpp"

int Produto::cod_prod = 1;
Produto::Produto(descricao desc_prod,double preco_un, std::string lote, std::string data_validade){
  _preco_un = preco_un;
  _data_validade = data_validade; 
  _lote = lote;
  _desc_prod = desc_prod;

  _cod_prod = cod_prod; 
  cod_prod++;
}

void Produto::reset_preço(double novo_preco){
  _preco_un = novo_preco;
}

std::string Produto::get_validade() const{
  return _data_validade;
}

double Produto::get_preco() const{
  return _preco_un;
}

void Produto::print_dados() const{
  std::cout << _cod_prod << " " <<_desc_prod._nome << " " <<_desc_prod._marca << " " << _desc_prod._volume << " " << _preco_un << " ";
}