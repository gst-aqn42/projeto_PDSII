<h1 align="center"> Projeto de PDSII : Sistema de vendas de um supermercado.</h1>
<h3>Grupo 6: 
  <p>
    <a>Gustavo Rodrigues de Aquino - 2018020476</a>
    <a>Marco - </a>
    <a>João Pedro - </a>
  </p>
</h3>

<h2 allign="left">Cartões CRC:</h2>

<h3>Classe: Produto</h3>
<ul>
  <h3>Responsabilidade:</h3>
  <p>
      <li>
        <a>Alterar o preço.</a>
      </li>
      <li>
        <a>Resgatar valores relevantes do objeto.</a>
      </li>
  </p>
</ul>
<ul>
  <h3>Colaboradores</h3>
  <p>
      <li>
      </li>
  </p>
</ul>
<br>

<h3>Classe: Estoque</h3>
<ul>
  <h3>Responsabilidade:</h3>
  <p>
    <li>
      <a>Adicionar produto no estoque</a>
    </li>
    <li>
      <a>Remover produto do estoque</a>
    </li>
    <li>
      <a>Imprimir Estoque</a>
    </li>
  </p>
</ul>
<ul>
  <h3>Colaboradores</h3>
  <p>
    <li>
      <a>Produto</a>
    </li>
  </p>
</ul>
<br>
  
<h3>Classe: Venda</h3>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Alterar o estoque de acordo com a venda</a>
        </li>
        <li>
            <a>Gerar nota fisca</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            <a>Estoque</a>
        </li>
         <li>
            <a>Cliente</a>
        </li>
    </p>
</ul>
<br>

<h3>Classe: Caixa</h3>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Realizar Venda</a>
        </li>
        <li>
            <a>Cadastrar Cliente </a>
        </li>
        <li>
            <a>Fechamento de Caixa </a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            <a>Venda</a>
        </li>
         <li>
            <a>Cliente</a>
        </li>
    </p>
</ul>
<br>

<h3>Classe: Repositor</h3>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Remover produtos vencidos</a>
        </li>
        <li>
            <a>Verificar produtos danificados</a>
        </li>
        <li>
            <a>Alterar preço dos produtos</a>
        </li>
        <li>
            <a>Relatório de produtos</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            <a>Estoque</a>
        </li>
    </p>
</ul>
<br>

<h3>Classe: Gerente</h3>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Gerar balanco de estoque</a>
        </li>
        <li>
            <a>Gerar balanço de todos os caixas</a>
        </li>
        <li>
            <a>Contratar Funcionarios</a>
        </li>
        <li>
            <a>Calcular salários</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            <a>Caixa</a>
        </li>
        <li>
            <a>Estoque</a>
        </li>
        <li>
            <a>Repositor</a>
        </li>
    </p>
</ul>
<br>

<h3>Classe: Cliente</h3>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Cadastrar um novo cliente</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
        </li>
    </p>
</ul>
<br>
<br>


<h2>User Story:</h2>
 <li>
    <h3>Repositor</h3> 
</li>
    <p>
        <ol>
            <a>+ Como repositor eu desejo alterar os preços dos produtos de acordo com sua condição, ou seja, quando um produto está avariado, mas ainda prórpio para consumo (lata amassada no estoque, caixa amassada...) ele recebe um valor diferente do produto em plenas condições.</a>
        </ol>
        <ol>            
            <a>+ Como repositor eu desejo cadastrar mais produtos no estoque</a>
        </ol>
        <ol>
            <a>+ Como repositor eu desejo classificar um produto como danificado ou não</a>
        </ol>
        <ol>
            <a>+ Como repositor eu desejo remover os produtos vencidos e se possível repor a prateleira com novos produtos.</a>
        </ol>
    </p>