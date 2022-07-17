#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

#include <string>
#include <map>
#include "Produto.hpp"
#include "Exceptions.hpp"

class Estoque{
private:
  std::map<int, Produto> _estoque;

public:
  void adicionar_estoque(Produto &produto); 
  void remover_produto_do_estoque(std::string lote);
  void verificar_vencidos(std::string dataAtual); //A data atual deve ser colocada da forma: AnoMesDia, sem espaços ou divisões
  void reduzir_estoque(int codProd, int qtd);
  void imprimir_estoque();
  void alterar_preco(int codProd, double novoPreco);
  Produto retorna_produto(int codProd);
};
#endif

