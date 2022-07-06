#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

#include <string>
#include <map>
#include "Produto.hpp"


class Estoque{
private:
  std::map<int, Produto> _estoque;

public:
  void adicionar_estoque(Produto &produto); 
  void remover_produto_do_estoque(std::string lote);
  void verificar_vencidos(std::string data_atual); //A data atual deve ser colocada da forma: AnoMesDia, sem espaços ou divisões
  void reduzir_estoque(int cod_prod, int qtd);
  void imprimir_estoque();
  void alterar_preco(int cod_prod, double novo_preco);
};
#endif