#include "Estoque.hpp"

void Estoque::adicionar_estoque(int cod_prod, Produto &produto){

}

void Estoque::remover_produto_do_estoque(std::string lote){

}

std::string Estoque::verificar_vencidos(std::string data_vencimento){

}

void Estoque::reduzir_estoque(int cod_prod, int qtd){
  auto it = _estoque.find(cod_prod);
  it->second.remover_prod(qtd);
}

