#include "Cliente.hpp"

Cliente::Cliente(){
}

Cliente::Cliente(std::string CPF){
    _CPF = CPF;
}

void Cliente::adicionar_produto_na_lista(Produto& adc, int qtd){
    listaDeCompra novo;
    novo.daLista = adc;
    novo.qtd = qtd;

    _compra.push_back(novo);
}


