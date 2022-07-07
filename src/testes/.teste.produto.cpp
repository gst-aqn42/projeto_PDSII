#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN  
#include "doctest-master/doctest/doctest.h"
#include "Produto.hpp"

TEST_CASE("Testando o Produto 1"){ 
    descricao desc;
    desc._nome = "Amendoim"; desc._marca = "Pachá"; desc._volume = "500g";
    dadosLote lote;
    lote._lote = "202207040115MG"; lote._qtd = 40; lote._data_validade = "20/06/2023";
    Produto prod = Produto(desc, 10.60, lote);

    CHECK(prod.get_lote() == "202207040115MG");
    CHECK(prod.get_validade() == "20/06/2023");
    CHECK(prod.get_qtd() == 40);
    prod.adc_prod(10);
    CHECK(prod.get_qtd() == 50);
    prod.remover_prod(20);
    CHECK(prod.get_qtd() == 30);
    CHECK(prod.get_preco() == 10.60);
    prod.reset_preco(15.90);
    CHECK(prod.get_preco() == 15.90);
    CHECK(prod.get_cod_prod() == 1);

}

//Pããão
TEST_CASE("Testando o Produto 2"){ 
    descricao desc;
    desc._nome = "PãoDeForma"; desc._marca = "SevenBoys"; desc._volume = "500g";
    dadosLote lote;
    lote._lote = "202207040136MG"; lote._qtd = 89; lote._data_validade = "13/06/2023";
    Produto prod = Produto(desc, 6.50, lote);

    CHECK(prod.get_lote() == "202207040136MG");
    CHECK(prod.get_validade() == "13/06/2023");
    CHECK(prod.get_qtd() == 89);
    prod.adc_prod(10);
    CHECK(prod.get_qtd() == 99);
    prod.remover_prod(9);
    CHECK(prod.get_qtd() == 90);
    CHECK(prod.get_preco() == 6.50);
    prod.reset_preco(7.35);
    CHECK(prod.get_preco() == 7.35);
    CHECK(prod.get_cod_prod() == 2);

}
