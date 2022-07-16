#include "/home/ozymandias/C++/projeto_PDSII/include/Cliente.hpp"

void Cliente::cadastrar_novo_cliente(std::string CPF){
    _CPF = CPF;
    std::cout << "Cliente cadastrado com sucesso." << std::endl;
}

void Cliente::adicionar_produto_na_lista(Produto& adc, int qtd){
    listaDeCompra novo;
    novo.daLista = adc;
    novo.qtd = qtd;

    _compra.push_back(novo);
}

std::string Cliente::get_CPF(){
    return _CPF;
}

std::list<listaDeCompra>* Cliente::lista_compras(){
 return &_compra;
}