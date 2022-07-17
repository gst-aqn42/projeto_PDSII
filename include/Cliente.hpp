#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <list>
#include "Produto.hpp"


struct listaDeCompra{
  Produto daLista; int qtd;
};

class Cliente{
private:
  std::list<listaDeCompra> _compra; std::string _CPF; std::string _endereco;
public:
  Cliente(std::string CPF, std::string endereco);
  void adicionar_produto_na_lista(Produto& adc, int qtd); //std::list<listaDeCompra> &compra
  std::string get_CPF();
  std::string get_endereco();
  std::list<listaDeCompra>* lista_compras();
};
#endif