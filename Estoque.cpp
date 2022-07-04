#include "Estoque.hpp"

void Estoque::adicionar_estoque(Produto &produto){
  std::pair<int, Produto> aux(produto.get_cod_prod(), produto);
  _estoque.insert(aux);
}

void Estoque::remover_produto_do_estoque(std::string lote){
  std::map<int, Produto>::iterator aux = _estoque.begin();
  while(aux != _estoque.end()){
    if ((*aux).second.get_lote() == lote){
      _estoque.erase(aux);
      std::cout << "Produtos do lote: " << lote << " revmovidos." << std::endl;
      break;
    }else{
      aux++;
    }
  }
  std::cout << "produtos do lote:" << lote << "não encontrado." << std::endl;
}

std::string Estoque::verificar_vencidos(std::string data_vencimento){
  int countVencidos = 0;
  std::map<int, Produto>::iterator aux = _estoque.begin();
  while (aux != _estoque.end()){
    if (){ //Biblioteca ctime (?)
      /* code */
    }
    
  }
  return "";
}

void Estoque::reduzir_estoque(int cod_prod, int qtd){
  std::map<int, Produto>::iterator aux = _estoque.find(cod_prod);
  if ((*aux).second.get_qtd() >= qtd){
    aux->second.remover_prod(qtd);
  }else{
    std::cout << "Não existem produtos o suficiente no estoque para a compra, o máximo possível é: " << aux->second.get_qtd() << std::endl;
  }
}

void Estoque::imprimir_estoque(){
  std::map<int, Produto>::iterator aux = _estoque.begin();
  if (aux == _estoque.end()){
    std::cout << "O estoque está vazio." << std::endl;
  }
  while (aux != _estoque.end()){
    aux->second.print_dados();
    aux++;
  }
}

void Estoque::alterar_preco(int cod_prod, double novo_preco){
  std::map<int, Produto>::iterator aux = _estoque.find(cod_prod);
  if ((*aux).second.get_cod_prod() == cod_prod){
    (*aux).second.reset_preco(novo_preco);
  }else{
    std::cout << "Produto não encontrado." << std::endl;
  }
  
}