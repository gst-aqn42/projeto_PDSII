#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

#include <string>
#include <map>
#include "Produto.hpp"


class Estoque{
private:
  std::map<int, Produto> _estoque;

public:
  Estoque();
  void adicionar_estoque(Produto &produto);
  void remover_produto_do_estoque(std::string lote);
  std::string verificar_vencidos(std::string data_vencimento); //Recebe o lote dos produtos vencidos
  void reduzir_estoque(int cod_prod, int qtd);
  void imprimir_estoque();
  void alterar_preco(int cod_prod, double novo_preco);
};
#endif