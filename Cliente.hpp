#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <list>
#include "Produto.hpp"


struct listaDeCompra{
  Produto daLista; int qtd;
};

class Cliente{
private:
  std::list<listaDeCompra> compra;
public:
    int adicionar_produto_na_lista(listaDeCompra& adc);
    std::list<listaDeCompra>& entregar_compras();
};
#endif