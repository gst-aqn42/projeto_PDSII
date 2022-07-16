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
  void cadastrar_novo_cliente(std::string CPF);
  void adicionar_produto_na_lista(Produto& adc, int qtd); //std::list<listaDeCompra> &compra
  std::string get_CPF();
  std::list<listaDeCompra>* lista_compras();
};
#endif