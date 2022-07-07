#ifndef VENDAS_HPP
#define VENDAS_HPP
#include <list>
#include "Produto.hpp"
#include "Estoque.hpp"
#include "Cliente.hpp"
#include <map>

class Vendas{
private:
  std::map<int,std::list<listaDeCompra>> _vendasCaixa; static int codigo_vendas; double dinheiroEmCaixa;
public:
  void nova_venda(Estoque& estoquePrincipal, std::list<listaDeCompra> &compra);//reduz o estoque, chama a cobrança, calcula o troco e imprime a nota fiscal
  double cobranca(double valorDaCompra, bool dinheiroEspecie);
  void imprimir_nota_fiscal(std::list<listaDeCompra> &compra);
  void fechamento_de_caixa();
};

#endif