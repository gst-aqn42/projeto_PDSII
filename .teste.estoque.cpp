#include "Estoque.hpp"
#include "Produto.hpp"
//Todas as possibilidades testadas passam 
int main(){ 
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

    Estoque principal;
    principal.imprimir_estoque();
    principal.adicionar_estoque(prod);
    principal.adicionar_estoque(prod2);
    principal.adicionar_estoque(prod3);
    principal.adicionar_estoque(prod4);
    principal.adicionar_estoque(prod5);
    principal.imprimir_estoque();
    principal.verificar_vencidos("20230612");
    principal.imprimir_estoque();
    principal.remover_produto_do_estoque("202207060006MG");
    principal.imprimir_estoque();
    principal.reduzir_estoque(1, 100);
    principal.alterar_preco(1, 11.20);
    principal.alterar_preco(6,10.00);
    principal.imprimir_estoque();

    return 0;
}
