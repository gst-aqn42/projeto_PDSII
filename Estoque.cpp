#include "Estoque.hpp"
#include <vector>
//Classe Estoque funcional e sem bugs encontrados para os testes executados.
void Estoque::adicionar_estoque(Produto &produto){
  bool repetido = false;
  if (!_estoque.empty()){
    std::map<int, Produto>::iterator it = _estoque.begin();
    while (it != _estoque.end()){
      if (it->second.get_lote() == produto.get_lote()){
        it->second.adc_prod(produto.get_qtd());
        repetido = true;
        break;
      }
      it++;
    }
  }
  
  if (!repetido){
    std::pair<int, Produto> aux(produto.get_cod_prod(), produto);
    _estoque.insert(aux);
  }
}

void Estoque::remover_produto_do_estoque(std::string lote){ //Remove TODOS os produtos do lote informado
  bool removido = false;
  std::map<int, Produto>::iterator aux = _estoque.begin();
  while (aux != _estoque.end()){
    if (aux->second.get_lote() == lote){
      std::map<int, Produto>::iterator remove = aux;
      aux++;
      _estoque.erase(remove->second.get_cod_prod());
      removido = true;
    }else{
      aux++;
    }
  }

  if (removido){
    std::cout << "Produtos do lote: " << lote << " removido do estoque." << std::endl;
  }else{
    std::cout << "Produtos do lote: " << lote << " não encontrado" << std::endl;
  }
}

void Estoque::verificar_vencidos(std::string data_atual){ //Verifica se há produtos vencidos de acordo com a data informada e retorna o número de produtos cadastrados vencidos e seus lotes.
  int countVencidos = 0;
  std::vector <std::string> lotesVencidos;
  std::map<int, Produto>::iterator aux = _estoque.begin();
  while (aux != _estoque.end()){
    if (aux->second.get_validade() < data_atual){ 
      lotesVencidos.push_back(aux->second.get_lote());
      countVencidos++;
      aux++;
    }else{
      aux++;
    }
  }
  
  if (countVencidos != 0){
    std::cout << "O número de produtos vencidos é: " << countVencidos << "." << std::endl;
    std::vector<std::string>::iterator it = lotesVencidos.begin();
    while (it != lotesVencidos.end()){
      std::cout << *it << std::endl;
      it++;
    }
  }else{
    std::cout << "Não existem produtos vencidos." << std::endl;
  }
}

void Estoque::reduzir_estoque(int cod_prod, int qtd){ //Reduz o estoque para uma venda caso o produto exista e tenha a quantidade pedida dentro do limiote, caso contrário não efetua nenhuma alteração e retorna uma mensagem. 
  std::map<int, Produto>::iterator aux = _estoque.find(cod_prod);
  if (aux != _estoque.end()){
    if (aux->second.get_qtd() >= qtd){
      aux->second.remover_prod(qtd);
    }else{
      std::cout << "Não existem produtos o suficiente no estoque para a compra, o máximo possível é: " << aux->second.get_qtd() << std::endl;
    }
  }else{
    std::cout << "Produto não encontrado no estoque." << std::endl;
  }
}

void Estoque::imprimir_estoque(){ //Apenas imprime o estoque, caso exista, se não retorna uma mensagem de estoque vazio
  std::map<int, Produto>::iterator aux = _estoque.begin();
  if (_estoque.empty()){
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