<h1 align="center"> Projeto de PDSII : Sistema de vendas de um supermercado.</h1>
<h2>Grupo 6: 
    <ul>
        <li>
            <a>Gustavo Rodrigues de Aquino - 2018020476</a>
        </li>
        <li>
            <a>Marco - </a>
        </li>
        <li>
            <a>João Pedro - </a>
        </li>
     </ul>
</h2>


Cartões CRC:
----------------------------------------------
Classe: Produto
<br>

Responsabilidade:                                   Colaboradores:
*Alterar o preço         
*Resgatar valores relevantes do objeto

----------------------------------------------
Classe: Estoque

Responsabilidade:                                   Colaboradores:
*Adicionar produto no estoque                       *Produto
*Remover produto do estoque
*Imprimir Estoque                   

----------------------------------------------
Classe: Venda

Responsabilidade:                                   Colaboradores:
*Alterar o estoque de acordo com a venda            *Estoque
*Gerar nota fiscal                                  *Cliente

----------------------------------------------
Classe: Caixa

Responsabilidade:                               Colaboradores:
*Realizar Venda                                 *Venda
*Cadastrar Cliente                              *Cliente
*Fechamento de Caixa                            

----------------------------------------------
Classe: Gerente

Responsabilidade:                               Colaboradores:
*Gerar balanco de estoque                       *Caixa
*Calcular salários                              *Estoque
*Fechamento de Caixa                            *Repositor
*Contratar Funcionarios                         

----------------------------------------------
Classe: Repositor

Responsabilidade:                               Colaboradores:
*Remover produtos vencidos                       *Estoque
*Verificar produtos danificados                  
*Relatório de produtos                           
*Contratar Funcionarios                         

----------------------------------------------
Classe: Cliente

Responsabilidade:                               Colaboradores:
*Registrar um novo cliente                    

----------------------------------------------


User Story: