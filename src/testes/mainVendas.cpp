#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "/home/ozymandias/C++/projeto_PDSII/include/Exceptions.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/doctest-master/doctest/doctest.h"
#include "/home/ozymandias/C++/projeto_PDSII/include/Produto.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Cliente.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Estoque.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Vendas.hpp"
#include "/home/ozymandias/C++/projeto_PDSII/include/Repositor.hpp"



TEST_CASE("Testando o Cliente"){ 
    
    Vendas _estaVenda; Repositor repo1;

    descricao desc;
    desc._nome = "Amendoim"; desc._marca = "Pachá"; desc._volume = "500g";
    dadosLote lote;
    lote._lote = "202207040115MG"; lote._qtd = 40; lote._data_validade = "20230613";
    Produto prod = Produto(desc, 10.60, lote); // produto 1

    descricao desc2;
    desc2._nome = "PãoDeForma"; desc2._marca = "SevenBoys"; desc2._volume = "500g";
    dadosLote lote2;
    lote2._lote = "202207040136MG"; lote2._qtd = 89; lote2._data_validade = "20230616";
    Produto prod2 = Produto(desc2, 6.50, lote2); // produto 2

    descricao desc3;
    desc3._nome = "Amendoim"; desc3._marca = "Pachá"; desc3._volume = "500g";
    dadosLote lote3;
    lote3._lote = "202207040115MG"; lote3._qtd = 61; lote3._data_validade = "20230613";
    Produto prod3 = Produto(desc3, 10.60, lote3); // produto 1 novamente

    descricao desc4;
    desc4._nome = "Iogurte"; desc4._marca = "Parmalat"; desc4._volume = "1000ml";
    dadosLote lote4;
    lote4._lote = "202207060006MG"; lote4._qtd = 62; lote4._data_validade = "20230611";
    Produto prod4 = Produto(desc4, 8.50, lote4); // produto 3

    descricao desc5;
    desc5._nome = "RefrigeranteCola"; desc5._marca = "Pepsi"; desc5._volume = "2l";
    dadosLote lote5;
    lote5._lote = "202207060010MG"; lote5._qtd = 100; lote5._data_validade = "20240611";
    Produto prod5 = Produto(desc5, 7.50, lote5); // produto 4
    
    Cliente cliente1("111.111.111-11", "Rua São José - 638");
    Cliente cliente2("222.222.222-22", "Rua São Paulo - 619");
    Cliente cliente3("333.333.333-33", "Rua Santo Antônio - 554");

    Estoque principal;
    repo1.adicionar_novo_produto(prod);
    repo1.adicionar_novo_produto(prod2);
    repo1.adicionar_novo_produto(prod3);
    repo1.adicionar_novo_produto(prod4);
    repo1.adicionar_novo_produto(prod5);

    Estoque est = repo1.referencia_estoque();
    _estaVenda.atribuir_estoque(est);
    
    //Checagem de cliente
    CHECK(cliente1.get_CPF() == "111.111.111-11");
    CHECK(cliente2.get_CPF() == "222.222.222-22");
    CHECK(cliente3.get_CPF() == "333.333.333-33");
    CHECK(cliente2.get_endereco() == "Rua São Paulo - 619");
    CHECK(cliente1.get_endereco() != "Rua Santo Antônio - 554");

    cliente1.adicionar_produto_na_lista(prod5, 1);
    cliente1.adicionar_produto_na_lista(prod2, 3); // total = 27

    cliente2.adicionar_produto_na_lista(prod4, 1);
    cliente2.adicionar_produto_na_lista(prod2, 3);
    cliente2.adicionar_produto_na_lista(prod, 2);// total = 49,2

    //Checagem de estoque
    Produto p = _estaVenda.get_produto_estoque(1);
    CHECK( p.get_preco() == prod.get_preco());
    Produto p2 = _estaVenda.get_produto_estoque(5);
    CHECK( p2.get_preco() == prod5.get_preco());


    //Checagem de venda
    _estaVenda.nova_venda(cliente1);
    double dinCaixa = _estaVenda.get_dinheiro_em_caixa(); //27.0
    CHECK(27.0 == dinCaixa);

    _estaVenda.nova_venda(cliente2);
    double dinCaix = _estaVenda.get_dinheiro_em_caixa(); //88.9
    CHECK(76.2 == dinCaix);

    double fechamento = _estaVenda.fechamento_de_caixa();
    CHECK(0.0 == fechamento);


}
