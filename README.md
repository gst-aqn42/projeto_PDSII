<h3 align="center">🛑🚧Este projeto está em desenvolvimento🚧🛑</h3>
<br>

<h1 align="center"> Projeto de PDSII: Sistema de vendas de um supermercado.</h1>


## 🔍Quadro de navegação

* [Sobre](##Sobre)
  * [Breve Descrição](###Breve-Descrição)
* [User Story's](##User-Story)
* [Cartões CRC](##Cartões-CRC)

<br>
<br>

## 📄Sobre 
<p>Este é o repositório do projeto do curso de PDSII, o projeto é referente a um <b>sistema de supermercado</b> e será implementado conforme a descrição.</p>

### Breve Descrição
<p>Com o objetivo de ter mais controle de sua mercearia o Doc seguiu a dica da Wanessa e decidiu comprar um sistema de gerenciamento que funcione pelo computador, Drew será seu novo gerente já que agora o Chris aprendeu a boxear com o professor Thrumann e irá desafiar um jovem de Bel-Air. Entretanto, Chris ainda pretende continuar trabalhando no mercadinho da esquina aos fins de semana, pois tem que pagar a inscrição dos torneios de boxe e o ginásio onde treina (na maioria das vezes como sparring). O quadro de funcionários ainda sofreu uma pequena modificação, pois Monk (o sobrinho do Doc que esteve no Vietnã), Golpe Baixo, Malvo e Perigo ficaram ricos após um fim de semana em Las Vegas. A nova funcionária é a Tonya, que após sua passagem meteórica pelo salão de beleza da Wanessa conseguiu um novo emprego no mercadinho a pedido de Julius. Drew tem alguma experiência com computadores, ele recebeu aula com a Peaches no centro comunitário de Bed-Stuy antes que os computadores fossem roubados, mas o Doc e Stacy também querem ter acesso as informações e não possuem grandes habilidades com computadores. Assim, foi pedido que o sistema fosse o mais simples possível. Inicialmente modelado de acordo com a <b>figura 1</b>, sendo que qualquer alteração deverá ser documentada afim de ajudar na navegação e acessos.
</p>

### Quadro de funcionários:
<p>
Drew: Gerente <br>
Chris: Caixa <br>
Doc/Stacey: Gerente <br>
Tonya: Repositora <br>
</p>



## 🧾User Story
  <h3>Repositor</h3>
<p>
  <ol>
    + Como repositor eu desejo alterar os preços dos produtos de acordo com sua condição, ou seja, quando um produto está avariado, mas ainda prórpio para consumo (lata amassada no estoque, caixa amassada...) ele recebe um valor diferente do produto em plenas condições.
  </ol>
  <ol>            
    + Como repositor eu desejo cadastrar mais produtos no estoque.
  </ol>
  <ol>
    + Como repositor eu desejo classificar um produto como danificado ou não.
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
    + Como gerente eu desejo calcular os salários dos funcionários.
  </ol>
</p>


  <h3>Caixa</h3> 
<p>
  <ol>
    + Como operador de caixa eu desejo vender um produto a uma pessoa e quero que as vendas fiquem armazenadas em ordem cronológica até o fim do dia.
  </ol>
  <ol>            
    +  Como operador de caixa eu desejo cadastrar o novo cliente, assim tendo seu endereço para entrega e alguns dados pertinentes para futuros métodos.
  </ol>
  <ol>
    + Como operador de caixa eu desejo fazer o fechamento de caixa para encerrar o expediente, assim gerando o valor da soma de todas as vendas e imprimindo o nome do cliente e valor gasto.
  </ol>
</p>

<br>

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
  <h3>Colaboradores:</h3>
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
  <h3>Colaboradores:</h3>
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
  <h3>Colaboradores:</h3>
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
  <h3>Colaboradores:</h3>
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
    <h3>Colaboradores:</h3>
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
    <h3>Colaboradores:</h3>
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
    <h3>Colaboradores:</h3>
    <p>
    </p>
</ul>
<br>
<br>


