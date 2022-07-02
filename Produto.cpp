#include "Produto.hpp"

int Produto::codigo_do_produto = 1;
Produto::Produto(descricao desc_prod,double preco_un, dadosLote dados_prod){
  _preco_un = preco_un;
  _dados_prod = dados_prod;
  _desc_prod = desc_prod;

  _cod_prod = codigo_do_produto; 
  codigo_do_produto++;
}

void Produto::reset_preço(double novo_preco){
  _preco_un = novo_preco;
}

std::string Produto::get_validade() const{
  return _dados_prod._data_validade;
}

std::string Produto::get_lote() const{
  return _dados_prod._lote;
}

int Produto::get_qtd() const{
  return _dados_prod._qtd;
}

void Produto::adc_prod(int qtd){
  _dados_prod._qtd += qtd;
}

void Produto::remover_prod(int qtd){
  _dados_prod._qtd -= qtd;
}

double Produto::get_preco() const{
  return _preco_un;
}

void Produto::print_dados() const{
  std::cout << _cod_prod << " " <<_desc_prod._nome << " " <<_desc_prod._marca << " " << _desc_prod._volume << " " << _preco_un << " ";
}

int Produto::get_cod_prod() const{
  return _cod_prod;
}