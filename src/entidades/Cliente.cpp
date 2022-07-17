#include "/home/ozymandias/C++/projeto_PDSII/include/Cliente.hpp"

Cliente::Cliente(std::string CPF, std::string endereco){
    _CPF = CPF;
    _endereco = endereco;
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

std::string Cliente::get_endereco(){
    return _endereco;
}

std::list<listaDeCompra>* Cliente::lista_compras(){
 return &_compra;
}

