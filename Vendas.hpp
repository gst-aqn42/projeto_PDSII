#ifndef VENDAS_HPP
#define VENDAS_HPP
#include <list>
#include "Produto.hpp"
#include "Estoque.hpp"
#include "Cliente.hpp"
#include <map>

class Vendas{
private:
  std::map<int,std::list<Produto>> _vendasCaixa; static int codigo_vendas;
public:
  void nova_venda(Estoque& estoquePrincipal, std::list<listaDeCompra> &compra);
  int fechamento_de_caixa();
};

#endif