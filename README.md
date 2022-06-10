<h3 align="center">🛑🚧Este projeto está em construção🚧🛑</h3>
<br>

<h1 align="center"> Projeto de PDSII : Sistema de vendas de um supermercado.</h1>



## 📄Sobre 
<p>Este é o reositório do projeto do curso de PDSII, o sistema é referente a um <b>sistema de supermercado</b> e será implementado conforme a descrição.</p>

## 🔍Quadro de navegação
* [Sobre](##Sobre)
* [Cartões CRC](##Cartões-CRC)
* [User Story's](##User-Story)


## 🧾User Story
  <h3>Repositor</h3>
<p>
  <ol>
    + Como repositor eu desejo alterar os preços dos produtos de acordo com sua condição, ou seja, quando um produto está avariado, mas ainda prórpio para consumo (lata amassada no estoque, caixa amassada...) ele recebe um valor diferente do produto em plenas condições.
  </ol>
  <ol>            
    + Como repositor eu desejo cadastrar mais produtos no estoque
  </ol>
  <ol>
    + Como repositor eu desejo classificar um produto como danificado ou não
  </ol>
  <ol>
    + Como repositor eu desejo remover os produtos vencidos e se possível repor a prateleira com novos produtos.
  </ol>
</p>


  <h3>Gerente</h3> 
<p>
  <ol>
    + Como gerente eu desejo gerar o balanço do estoque, mostrando os produtos com menos de 10 unidades e quais os produtos que mais venceram em estoque.
  </ol>
  <ol>            
    +  Como gerente eu desejo gerar o balanço de todos os caixas ao fim do dia para comparar as vendas com as baixas do estoque e fechamento de caixas.
  </ol>
  <ol>
    + Como gerente eu também desejo contratar e demitir funcionários.
  </ol>
  <ol>
    + Como gerente eu desejo calcular os salários dos funcionários
  </ol>
</p>


  <h3>Caixa</h3> 
<p>
  <ol>
    + Como operador de caixa eu desejo vender um produto a uma pessoa e quero que as vendas fiquem armazenadas em ordem cronológica até o fim do dia
  </ol>
  <ol>            
    +  Como operador de caixa eu desejo cadastrar o novo cliente, assim tendo seu endereço para entrega e alguns dados pertinentes para futuros métodos.
  </ol>
  <ol>
    + Como operador de caixa eu desejo fazer o fechamento de caixa para encerrar o expediente, assim gerando o valor da soma de todas as vendas e imprimindo o nome do cliente e valor gasto.
  </ol>
</p>

## 💳Cartões CRC:

<h3>Classe: Produto</h3>
<ul>
  <h3>Responsabilidade:</h3>
  <p>
      <li>
        Alterar o preço.
      </li>
      <li>
        Resgatar valores relevantes do objeto.
      </li>
  </p>
</ul>
<ul>
  <h3>Colaboradores</h3>
  <p>
  </p>
</ul>
<br>

<h3>Classe: Estoque</h3>
<ul>
  <h3>Responsabilidade:</h3>
  <p>
    <li>
      Adicionar produto no estoque
    </li>
    <li>
      Remover produto do estoque
    </li>
    <li>
      Imprimir Estoque
    </li>
  </p>
</ul>
<ul>
  <h3>Colaboradores</h3>
  <p>
    <li>
      Produto
    </li>
  </p>
</ul>
<br>
  
<h3>Classe: Venda</h3>
<ul>
  <h3>Responsabilidade:</h3>
  <p>
    <li>
      Alterar o estoque de acordo com a venda
    </li>
    <li>
      Gerar nota fiscal
    </li>
  </p>
</ul>
<ul>
  <h3>Colaboradores</h3>
  <p>
    <li>
      Estoque
    </li>
    <li>
      Cliente
    </li>
    </p>
</ul>
<br>

<h3>Classe: Caixa</h3>
<ul>
  <h3>Responsabilidade:</h3>
  <p>
    <li>
      Realizar Venda
    </li>
    <li>
      Cadastrar Cliente 
    </li>
    <li>
      Fechamento de Caixa
    </li>
  </p>
</ul>
<ul>
  <h3>Colaboradores</h3>
  <p>
    <li>
      Venda
    </li>
    <li>
      Cliente
    </li>
  </p>
</ul>
<br>

<h3>Classe: Repositor</h3>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            Remover produtos vencidos
        </li>
        <li>
            Verificar produtos danificados
        </li>
        <li>
            Alterar preço dos produtos
        </li>
        <li>
            Relatório de produtos
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            Estoque
        </li>
    </p>
</ul>
<br>

<h3>Classe: Gerente</h3>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            Gerar balanco de estoque
        </li>
        <li>
            Gerar balanço de todos os caixas
        </li>
        <li>
            Contratar Funcionarios
        </li>
        <li>
            Calcular salários
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            Caixa
        </li>
        <li>
            Estoque
        </li>
        <li>
            Repositor
        </li>
    </p>
</ul>
<br>

<h3>Classe: Cliente</h3>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            Cadastrar um novo cliente
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
    </p>
</ul>
<br>
<br>


