#include "Repositor.hpp"

Repositor::Repositor(std::string nome, std::string funcao){}

void Repositor::alterar_preco(Estoque &est, int cod_prod, double preco){
    est.alterar_preco(cod_prod, preco);
}