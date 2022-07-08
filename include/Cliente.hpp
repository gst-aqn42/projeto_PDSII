#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <list>
#include "Produto.hpp"


struct listaDeCompra{
  Produto daLista; int qtd;
};

class Cliente{
private:
  std::list<listaDeCompra> _compra; std::string _CPF;
public:
  Cliente();
  Cliente(std::string CPF);
  void adicionar_produto_na_lista(Produto& adc, int qtd); //std::list<listaDeCompra> &compra
};
#endif